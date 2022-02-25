import timeit

import antlr4
from antlr4 import CommonTokenStream, InputStream
from fugue_sql_antlr._parser import sa_fugue_sql as parser


def test_benchmark():
    sql = """
    SELECT a FROM x
    """
    count=10

    cpp_elapsed = timeit.timeit(lambda: parser._cpp_parse(InputStream(sql), "fugueLanguage"), number=count)
    py_elapsed = timeit.timeit(lambda: parser._py_parse(InputStream(sql), "fugueLanguage"), number=count)

    py_elapsed = py_elapsed / count
    cpp_elapsed = cpp_elapsed / count

    print("py_elapsed:  %.3f" % (py_elapsed * 1000), "ms")
    print("cpp_elapsed: %.3f" % (cpp_elapsed * 1000), "ms")
    print("Speedup: %.2f" % (py_elapsed / cpp_elapsed))
