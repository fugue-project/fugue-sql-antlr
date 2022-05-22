# <img src="./images/logo.svg" width="200">

[![PyPI version](https://badge.fury.io/py/fugue-sql-antlr.svg)](https://pypi.python.org/pypi/fugue-sql-antlr/)
[![PyPI pyversions](https://img.shields.io/pypi/pyversions/fugue-sql-antlr.svg)](https://pypi.python.org/pypi/fugue-sql-antlr/)
[![PyPI license](https://img.shields.io/pypi/l/fugue-sql-antlr.svg)](https://pypi.python.org/pypi/fugue-sql-antlr/)
[![codecov](https://codecov.io/gh/fugue-project/fugue-sql-antlr/branch/master/graph/badge.svg?token=TRJFPVXS67)](https://codecov.io/gh/fugue-project/fugue-sql-antlr)

Chat with us on slack!
[![Slack Status](https://img.shields.io/badge/slack-join_chat-white.svg?logo=slack&style=social)](http://slack.fugue.ai)

# Fugue SQL Antlr Parser

This is the dedicated package for the Fugue SQL parser built on Antlr4. It consists of two packages: [fugue-sql-antlr](https://pypi.python.org/pypi/fugue-sql-antlr/) and [fugue-sql-antlr-cpp](https://pypi.python.org/pypi/fugue-sql-antlr-cpp/).

[fugue-sql-antlr](https://pypi.python.org/pypi/fugue-sql-antlr/) is the main package. It contains the python parser of Fugue SQL and the vistor for the parser tree.

[fugue-sql-antlr-cpp](https://pypi.python.org/pypi/fugue-sql-antlr-cpp/) is the C++ implementation of the parser. This solution is based on the incredible work of [speedy-antlr-tool](https://github.com/amykyta3/speedy-antlr-tool), a tool that generates thin python interface code on top of the C++ Antlr parser. This package is purely optional, it should not affect the correctness and features of the Fugue SQL parser. However, with this package installed, the parsing time is **~25x faster**.

Neither of these two packages should be directly used by users. They are the core internal dependency of the main [Fugue](https://github.com/fugue-project/fugue) project (>=0.7.0).

## Installation

To install fugue-sql-antlr:

```bash
pip install fugue-sql-antlr
```

To install fugue-sql-antlr and fugue-sql-antlr-cpp:

```bash
pip install fugue-sql-antlr[cpp]
```

We try to pre-build the wheels for major operating systems and active python versions. But in case your environment is special, then when you install fugue-sql-antlr-cpp, please make sure you have the C++ compiler in your operating system. The C++ compiler must support the ISO C++ 2017 standard.
