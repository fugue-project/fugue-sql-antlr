from fugue_sql_antlr import FugueSQLParser


def test_get_norm_text():
    fp = FugueSQLParser(
        """
    select *
    from table.b
    """,
        rule="query",
        ignore_case=True,
        parse_mode="cpp",
    )
    assert "select * from table . b" == fp.get_norm_text(fp.tree)
    assert "select-*-from-table-.-b" == fp.get_norm_text(fp.tree, delimiter="-")
    assert "SELECT * FROM table . b" == fp.get_norm_text(fp.tree, upper_keyword=True)
