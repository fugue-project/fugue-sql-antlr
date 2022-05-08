from typing import Iterable, List, Optional, Tuple

from antlr4 import InputStream, Token
from antlr4.Token import CommonToken
from antlr4.tree.Tree import ParseTree, TerminalNode

from fugue_sql_antlr._parser.sa_fugue_sql import (
    SA_ErrorListener,
    _cpp_parse,
    _py_parse,
    parse,
)
from fugue_sql_antlr.constants import (
    _FUGUE_SQL_CASE_ISSUE_THREHOLD,
    FUGUE_CONF_SQL_IGNORE_CASE,
    FUGUE_SQL_CPP_PARSER_AVAILABLE,
)


class FugueSQLParser:
    def __init__(
        self,
        code: str,
        rule: str,
        ignore_case: bool,
        parse_mode: str,
    ):
        self._rule = rule
        self._raw_code = code
        self._raw_lines = code.splitlines()
        self._parse_mode = parse_mode
        if ignore_case:
            self._tree = self._to_tree(upper=True)
        else:
            try:
                self._tree = self._to_tree(upper=False)
            except SyntaxError as e:
                if _detect_case_issue(code, _FUGUE_SQL_CASE_ISSUE_THREHOLD):
                    prefix = (
                        "(FugueSQL requires uppercase characters by default. "
                        f"To ignore casing, turn on {FUGUE_CONF_SQL_IGNORE_CASE})"
                    )
                    msg = prefix + str(e)
                    raise SyntaxError(msg).with_traceback(None) from None
                else:
                    raise SyntaxError(str(e)) from None
        self._tokens = list(self._get_tokens(self.tree))
        for i, token in enumerate(self._tokens):
            token._arr_pos = i

    @property
    def code(self) -> str:
        return self._raw_code

    @property
    def tree(self) -> ParseTree:
        return self._tree

    def get_norm_text(self, node: Optional[ParseTree], delimiter: str = " ") -> str:
        if node is None:
            return ""
        tp = self._get_range(node)
        if tp is None:
            return ""
        if tp[0] is tp[1]:
            return tp[0].text
        return delimiter.join(
            self._tokens[i].text for i in range(tp[0]._arr_pos, tp[1]._arr_pos + 1)
        )

    def get_raw_text(self, node: Optional[ParseTree], add_lineno: bool = False) -> str:
        if node is None:
            return ""
        tp = self._get_range(node)
        if tp is None:
            return ""
        if not add_lineno:
            return self._raw_code[tp[0].start : tp[1].stop + 1]
        start = tp[0].line
        stop = tp[1].line
        lines: List[str] = []
        while start <= stop:
            prefix = "" if not add_lineno else f"{start}:\t"
            lines.append(prefix + self._raw_lines[start - 1])
            start += 1
        return "\n".join(lines)

    def _get_tokens(self, node: Optional[ParseTree]) -> Iterable[CommonToken]:
        if node is None:
            return
        elif isinstance(node, Token):
            if isinstance(node, CommonToken) and node.type != Token.EOF:
                yield node
        elif isinstance(node, TerminalNode):
            yield from self._get_tokens(node.getSymbol())
        else:
            for i in range(node.getChildCount()):
                for x in self._get_tokens(node.getChild(i)):
                    yield x

    def _get_range(self, node: ParseTree) -> Optional[Tuple[CommonToken, CommonToken]]:
        if isinstance(node, CommonToken):
            return node, node
        s = node.start
        if not isinstance(s, CommonToken) or s.type == Token.EOF:
            return None
        return s, node.stop

    def _to_tree(self, upper: bool) -> ParseTree:
        stream = InputStream(self._raw_code if not upper else self._raw_code.upper())
        handler = _ErrorListener(self)
        if self._parse_mode == "auto":
            return parse(stream, self._rule, sa_err_listener=handler)
        if self._parse_mode == "cpp":
            if not FUGUE_SQL_CPP_PARSER_AVAILABLE:
                raise ValueError(
                    "CPP parser is not installed, use 'auto' or 'py' as parse_mode"
                )
            return _cpp_parse(stream, self._rule, sa_err_listener=handler)
        if self._parse_mode == "py":
            return _py_parse(stream, self._rule, sa_err_listener=handler)
        raise ValueError(f"{self._parse_mode} is not valid")


def _detect_case_issue(text: str, lower_case_percentage: float) -> bool:
    letters, lower = 0, 0.0
    for c in text:
        if "a" <= c <= "z":
            lower += 1.0
            letters += 1
        elif "A" <= c <= "Z":
            letters += 1
    if letters == 0:
        return False
    return lower / letters >= lower_case_percentage


class _ErrorListener(SA_ErrorListener):
    def __init__(self, parser: FugueSQLParser):
        super().__init__()
        self._parser = parser

    def syntaxError(
        self,
        input_stream: InputStream,
        offendingSymbol: Token,
        char_index: int,
        line: int,
        column: int,
        msg: str,
    ):
        message = self._parser.get_raw_text(offendingSymbol, add_lineno=True)
        s = message.split("\t", 1)
        pre = "".join([" "] * len(s[0])) + "\t"
        dots = "".join(["."] * column)
        arrows = "".join(["^"] * (offendingSymbol.stop - offendingSymbol.start + 1))
        raise SyntaxError(f"\n{message}\n{pre}{dots}{arrows}")
