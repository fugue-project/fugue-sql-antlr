import timeit

from fugue_sql_antlr import FugueSQLParser


def test_benchmark():
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
    count = 10

    cpp_elapsed = timeit.timeit(
        lambda: FugueSQLParser(sql, "fugueLanguage", False, parse_mode="cpp").tree,
        number=count,
    )
    py_elapsed = timeit.timeit(
        lambda: FugueSQLParser(sql, "fugueLanguage", False, parse_mode="py").tree,
        number=count,
    )

    py_elapsed = py_elapsed / count
    cpp_elapsed = cpp_elapsed / count

    print("py_elapsed:  %.3f" % (py_elapsed * 1000), "ms")
    print("cpp_elapsed: %.3f" % (cpp_elapsed * 1000), "ms")
    print("Speedup: %.2f" % (py_elapsed / cpp_elapsed))
