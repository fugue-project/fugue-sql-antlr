from .utils import bad_single_syntax, bad_syntax, good_single_syntax, good_syntax


def test_create():
    good_syntax(
        """
    a=create [[0],[1]] schema a:int
    a=create using mock_create1 params n:1
    b=create using mock_create2(n=1) schema a:int
    """
    )


def test_process():
    # basic features, nest
    good_syntax(
        """
    a=create using mock_create1 params n:1
    b=create using mock_create1 params n:2
    process a,b using mock_processor1(n=3)
    process b,a using mock_processor2(n=4) schema b:int
    process  # nested
        (create using mock_create1(n=5)),
        (create using mock_create1(n=6))
        using mock_processor1(n=7)
    """
    )

    # anonymous, nested anonymous
    good_syntax(
        """
    create using mock_create1 params n:1
    process using mock_processor3
    process  # nested
        (process prepartition by a using mock_processor3),
        (process using mock_processor3)
        using mock_processor1
    """
    )

    # dict like dataframes
    good_syntax(
        """
    process
        df1=(create using mock_create1(n=1)),
        df2:(create using mock_create1(n=2))
        using mock_processor1
    """
    )


def test_zip():
    good_syntax(
        """
    a=create using mock_create1 params n:1
    zip a,(create using mock_create1 params n:2)

    a=create using mock_create1 params n:1
    zip a,(create using mock_create1 params n:2) left
        outer by a presort b desc
    """
    )


def test_cotransform():
    good_syntax(
        """
    zip
        (create using mock_create1 params n:1),
        (create using mock_create1 params n:2)
    transform prepartition 3 using mock_cotransformer1(n=3)
    """
    )


def test_transform():
    good_syntax(
        """
    create [[0],[1]] schema a:int
    transform using mock_transformer(n=2) schema a:int
    """
    )

    good_syntax(
        """
    create [[0],[1]] schema a:int
    transform
        prepartition ROWCOUNT / 2 by a presort b desc
        using mock_transformer(n=2) schema * ~ k + AA : str,bb:int
    """
    )

    good_syntax(
        """
    create [[0],[1]] schema a:int
    transform
        prepartition ROWCOUNT / 2 by a presort b desc
        using mock_transformer(n=2) schema *
        callback _func
    """
    )


def test_out_transform():
    good_syntax(
        """
    create [[0],[1]] schema a:int
    outtransform using OT(n=2)
    """
    )

    good_syntax(
        """
    create [[0],[1]] schema a:int
    outtransform
        prepartition ROWCOUNT / 2 by a presort b desc
        using mock_transformer(n=2)
    """
    )


def test_output():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    output prepartition 4 using mock_output
    output a, (create using mock_create1(n=2)) using mock_output(n=3)
    """
    )


def test_persist_checkpoint_broadcast():
    good_syntax(
        """
    create using mock_create1 persist
    a=create using mock_create1 lazy persist (level="a.b")
    create using mock_create1 broadcast
    a=create using mock_create1 persist(level="a.b") broadcast
    create using mock_create1 checkpoint
    a= create using mock_create1 lazy strong checkpoint
    a=create using mock_create1 lazy checkpoint(x="xy z")
    a=create using mock_create1 checkpoint prepartition 5 single (x="xy z") broadcast
    create using mock_create1 deterministic checkpoint
    create using mock_create1 deterministic checkpoint "n"
        prepartition 4 single params x=2
    """
    )


def test_yield():
    good_syntax(
        """
    a=create using mock_create1 yield dataframe
    create using mock_create1 yield local dataframe as aaa
    create using mock_create1 yield file as aa
    c=create using mock_create1 deterministic checkpoint yield dataframe
    d=create using mock_create1 deterministic checkpoint yield file as bb
    create using mock_create1 deterministic checkpoint yield file as cc
    """
    )


def test_select_nested():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    b=create using mock_create1(n=2)
    # nested query
    select * from (select * from a.b)
    select * from (create using mock_create1) AS bb
    select * from (create using mock_create1) TABLESAMPLE(5 PERCENT)
    select * from (select * from (create using mock_create1))
    """
    )


def test_joins():
    good_syntax(
        """
        # joins
        select a.* from a natural join b
        select a.* from a join b on a.a==b.a
        select a.* from a natural inner join b
        select a.* from a inner join b on a.a==b.a
        select a.* from a left join b on a.a==b.a
        select a.* from a left outer join b on a.a==b.a
        select a.* from a natural left outer join b
        select a.* from a right join b on a.a==b.a
        select a.* from a right outer join b on a.a==b.a
        select a.* from a natural right outer join b
        select a.* from a full join b on a.a==b.a
        select a.* from a full outer join b on a.a==b.a
        select a.* from a natural full join b
        """,
        show=True,
    )


def test_select():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    b=create using mock_create1(n=2)
    # assignment and table not found
    x=select * from a.b
    # sample and alias when table not found
    select * from a.b TABLESAMPLE (5 PERCENT) AS x
    select * from a.b AS x
    # when table is found
    select * from a
    select * from a TABLESAMPLE(5 PERCENT)
    select * from a TABLESAMPLE(5 PERCENT) AS x
    # no from
    select *
    select * where t=100
    # multiple dependencies
    select a.* from a join b on a.a==b.a
    # persist & checkpoint & broadcast
    select * from a persist broadcast print
    select * from a persist (level="a.b.c") broadcast print
    """
    )


def test_select_with():
    good_syntax(
        """
    with
        x as (select * from a),
        y as (select * from b)
    select *   from x union select * from y
    """
    )


def test_select_plus_engine():
    good_syntax(
        """
    connect MockEngine select * from xyz persist
    connect _mock(p=2) select * from xyz
    connect MockEngine select * from xyz order by t limit 10
    connect MockEngine with a as (select * from b) select * from a order by t limit 10
    # This is not supported
    # transform (connect MockEngine select a,b from a) using mock_transformer2
    # This is not supported
    # select aa+bb as t from (connect MockEngine select aa,bb from a)
    """
    )


def test_general_set_op():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    b=create using mock_create1(n=2)
    select * from a union all select * from b
    create using mock_create1 union select * from b
    create using mock_create1 intersect distinct process a using mock_processor1
    select * from (create using mock_create1) union process a using mock_processor1
    # operation on omitted dependencies should work as expected
    c=create using mock_create1(n=2)
    transform using mock_transformer2 union process using mock_processor1
    """
    )


def test_print():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    print
    print 5 rows from a, (create using mock_create1(n=2)) rowcount title "\\"b   B"
    """
    )


def test_save():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    save overwrite parquet "xx"
    save a append "xx"
    save a to "xx"
    save to single csv "xx.csv"(header=True)
    save prepartition by x overwrite "xx"
    save (create using mock_create1(n=2)) overwrite "xx"
    """
    )


def test_save_and_use():
    good_syntax(
        """
    a=create using mock_create1(n=1)
    b=create using mock_create1(n=1)
    a=save and use a overwrite parquet "xx"
    save and use b append "xx"
    save and use b to "xx"
    save and use a to single csv "xx.csv"(header=True)
    save and use prepartition by x overwrite "xx"
    save and use (create using mock_create1(n=2)) overwrite "xx"
    """
    )


def test_load():
    good_syntax(
        """
    load "xx"
    load csv "xx"
    load "xx" columns a:int, b:str
    load "xx"(header=True) columns a, b
    """
    )


def test_rename():
    good_syntax(
        """
    a=create using mock_create1
    rename columns a:aa,b:bb
    rename columns a:aaa,b:bbb from a
    """
    )


def test_alter_columns():
    good_syntax(
        """
    a=create using mock_create1
    alter columns a:str, b:str
    alter columns a:float, b:double from a
    """
    )


def test_drop():
    good_syntax(
        """
    a=create using mock_create1
    drop columns a,b
    drop columns a,b if exists from a
    d=create using mock_create1
    drop rows if any null
    drop rows if all null from d
    drop rows if any nulls on a,c from d
    """
    )


def test_sample():
    good_syntax(
        """
    a=create using mock_create1
    sample 10 percent
    sample replace 5 rows seed 7 from a
    """
    )


def test_fill():
    good_syntax(
        """
    a=create [[NULL, 1],[1, NULL]] schema a:int, b:int
    fill nulls params a:99, b:-99 from a

    create [[NULL, 1],[1, NULL]] schema a:int, b:int
    fill nulls (a:99, b:-99)
    """
    )


def test_head():
    good_syntax(
        """
    a=create [[NULL, 1], [NULL, 2], [1, NULL], [1, 2]] schema a:double, b:double
    b=take 1 row from a prepartition by a presort b desc nulls first
    c=take 1 row from b presort b desc nulls first"""
    )
    # anonymous
    good_syntax(
        """
    create [[NULL, 1], [NULL, 2], [1, NULL], [1, 2]] schema a:double, b:double
    take 1 row prepartition by a presort b desc nulls first
    take 1 row presort b desc nulls first"""
    )


def test_module():
    good_syntax(
        """
    a=sub using create
    b=sub using create(n=2)
    dfs=sub a,b using merge(k="a1")
    print dfs[a1]
    print dfs[bb]
    sub a,b using merge2(k=1)
    sub using out1
    dfs=sub df2:a,df1:b using merge3
    print dfs[0]
    print dfs[1]
    """
    )


def test_complex():
    good_syntax(
        """
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
    """,
        ignore_case=False,
    )
