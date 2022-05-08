from typing import Any, List, Type

from antlr4.tree.Tree import ParseTree

from fugue_sql_antlr._parser.fugue_sqlVisitor import fugue_sqlVisitor
from fugue_sql_antlr.parser import FugueSQLParser


class FugueSQLVisitor(fugue_sqlVisitor):
    def __init__(self, parser: FugueSQLParser):
        super().__init__()
        self._sql = parser

    @property
    def sql(self) -> FugueSQLParser:
        return self._sql

    def collect_children(self, node: ParseTree, tp: Type):
        result: List[Any] = []
        n = node.getChildCount()
        for i in range(n):
            c = node.getChild(i)
            if isinstance(c, tp):
                result.append(c.accept(self))
        return result
