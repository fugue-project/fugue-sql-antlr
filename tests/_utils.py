import pandas as pd


def df_eq(df1: pd.DataFrame, df2: pd.DataFrame):
    pd.testing.assert_frame_equal(df1, df2, check_dtype=False)
