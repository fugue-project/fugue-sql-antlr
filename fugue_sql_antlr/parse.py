from typing import Union

from antlr4 import InputStream
from antlr4.tree.Tree import ParseTree

from fugue_sql_antlr._parser.sa_fugue_sql import (
    USE_CPP_IMPLEMENTATION,
    _cpp_parse,
    _py_parse,
    parse,
)


def parse_tree(code: Union[str, InputStream], rule: str, mode: str) -> ParseTree:
    stream = InputStream(code) if isinstance(code, str) else code
    if mode == "auto":
        return parse(stream, rule)
    if mode == "cpp":
        if not USE_CPP_IMPLEMENTATION:
            raise ValueError("CPP parser is not installed, use 'auto' or 'py' as mode")
        return _cpp_parse(stream, rule)
    if mode == "py":
        return _py_parse(stream, rule)
