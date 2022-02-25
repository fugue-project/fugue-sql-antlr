from speedy_antlr_tool import generate

generate(
    py_parser_path="fugue_sql_antlr/_parser/fugue_sqlParser.py",
    cpp_output_dir="fugue_sql_antlr/_parser/cpp",
)

modified = []
with open("fugue_sql_antlr/_parser/cpp/sa_fugue_sql_translator.cpp", "r") as f:
    for line in f.readlines():
        if "ctx->_" in line:
            modified.append("//" + line)
        else:
            modified.append(line)

with open("fugue_sql_antlr/_parser/cpp/sa_fugue_sql_translator.cpp", "w") as f:
    f.write("".join(modified))
