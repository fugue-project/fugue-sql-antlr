from speedy_antlr_tool import generate

generate(
    py_parser_path="fugue_sql_antlr/_parser/fugue_sqlParser.py",
    cpp_output_dir="fugue_sql_antlr_cpp/src",
)

with open("fugue_sql_antlr/_parser/sa_fugue_sql.py", "r") as f:
    txt = f.read().replace(
        "from . import sa_fugue_sql_cpp_parser",
        "from fugue_sql_antlr_cpp import sa_fugue_sql_cpp_parser",
    )

with open("fugue_sql_antlr/_parser/sa_fugue_sql.py", "w") as f:
    f.write(txt)
