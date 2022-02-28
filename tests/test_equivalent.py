import unittest

from fugue_sql_antlr.parse import parse_tree
from speedy_antlr_tool.validate import validate_top_ctx
from antlr4 import InputStream

def test_equivalent():
    sql = """
    src = LOAD "{{path}}"
    SELECT * WHERE symbol LIKE '{{symbol_pattern}}'
    SELECT symbol, date_trunc('day',time) AS date, SUM(Number_of_trades) AS trades GROUP BY 1,2
    top_symbols = SELECT symbol, AVG(trades) AS trades GROUP BY 1 ORDER BY 2 DESC LIMIT 10

    SELECT src.* FROM src INNER JOIN top_symbols ON src.symbol = top_symbols.symbol

    SELECT
        symbol,
        date_trunc('day', time) AS time,
        min_by(Open, time) AS open,
        MAX(High) AS high,
        MIN(Low) AS low,
        max_by(Close, time) AS close,
        SUM(Number_of_trades) AS trades,
        SUM(Volume) AS volume
    GROUP BY 1, 2
    YIELD DATAFRAME AS result
    """
    sql= "SELECT * FROM a AS b"
    stream = InputStream(sql)
    py = parse_tree(stream, "fugueLanguage", mode="py")
    cpp = parse_tree(stream, "fugueLanguage", mode="cpp")

    validate_top_ctx(py, cpp)
