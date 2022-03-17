import itertools
from antlr4 import TerminalNode
from fugue_sql_antlr import FugueSQLParser, FUGUE_SQL_CPP_PARSER_AVAILABLE
from speedy_antlr_tool.validate import validate_top_ctx
from pytest import raises


def good_single_syntax(*code, ignore_case=True, parse_mode="compare", show=False):
    good_syntax(
        *code,
        rule="fugueSingleStatement",
        ignore_case=ignore_case,
        parse_mode=parse_mode,
        show=show
    )


def good_syntax(
    *code, rule="fugueLanguage", ignore_case=True, parse_mode="compare", show=False
):
    for c in _enum_comb(*code):
        if parse_mode in ["py", "cpp", "auto"]:
            s = FugueSQLParser(c, rule, ignore_case=ignore_case, parse_mode=parse_mode)
            if show:
                _print_tree(s.tree)
        else:
            assert FUGUE_SQL_CPP_PARSER_AVAILABLE
            py = FugueSQLParser(c, rule, ignore_case=ignore_case, parse_mode="py")
            cpp = FugueSQLParser(c, rule, ignore_case=ignore_case, parse_mode="cpp")
            if show:
                _print_tree(py.tree)
                _print_tree(cpp.tree)
            validate_top_ctx(py.tree, cpp.tree)


def bad_single_syntax(*code, ignore_case=True):
    bad_syntax(*code, rule="fugueSingleStatement", ignore_case=ignore_case)


def bad_syntax(*code, rule="fugueLanguage", ignore_case=True, match=None):
    for c in _enum_comb(*code):
        modes = ["py", "cpp"] if FUGUE_SQL_CPP_PARSER_AVAILABLE else ["py"]
        for mode in modes:
            with raises(SyntaxError, match=match):
                FugueSQLParser(c, rule, ignore_case=ignore_case, parse_mode=mode)


def _enum_comb(*code):
    data = []
    for c in code:
        if isinstance(c, str):
            data.append([c])
        elif isinstance(c, list):
            if len(c) == 1:
                c.append("")
            data.append(c)
        else:
            raise Exception("element can be either a string or an array: " + c)
    for l in itertools.product(*data):
        yield " ".join(l)


def _print_tree(node, prefix=""):
    if isinstance(node, TerminalNode):
        token = node.getSymbol()
        print(prefix, type(token).__name__, token.text)
    else:
        print(prefix, type(node).__name__)
        for i in range(node.getChildCount()):
            _print_tree(node.getChild(i), prefix + "  ")
