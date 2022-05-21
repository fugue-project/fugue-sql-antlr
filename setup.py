# pylint: disable-all
# flake8: noqa
_BUILD_CPP = False

import fnmatch
import os
import platform
from pathlib import Path
from typing import List

from setuptools import Extension, setup, find_packages

from fugue_sql_antlr_version import __version__

with open("README.md") as f:
    _text = ["# Fugue SQL Antlr Parser"] + f.read().splitlines()[1:]
    LONG_DESCRIPTION = "\n".join(_text)


def package_files(directory: str) -> List[str]:
    files = [str(x)[len(directory) + 1 :] for x in Path(directory).glob("*/**/*")]
    return files


def get_version() -> str:
    tag = os.environ.get("RELEASE_TAG", "")
    if "dev" in tag.split(".")[-1]:
        return tag
    if tag != "":
        assert tag == __version__, "release tag and version mismatch"
    return __version__


def get_files(path: str, pattern: str) -> List[str]:
    """
    Recursive file search that is compatible with python3.4 and older
    """
    matches = []
    for root, _, filenames in os.walk(path):
        for filename in fnmatch.filter(filenames, pattern):
            matches.append(os.path.join(root, filename))
    return matches


def get_target() -> str:
    target = platform.system().lower()
    for known in ["windows", "linux", "darwin", "cygwin"]:
        if target.startswith(known):
            return known
    return target


def get_ext_modules() -> List[str]:
    if not _BUILD_CPP:
        return []
    extra_compile_args = {
        "windows": ["/DANTLR4CPP_STATIC", "/Zc:__cplusplus", "/std:c++17"],
        "linux": ["-std=c++17"],
        "darwin": ["-std=c++17"],
        "cygwin": ["-std=c++17"],
    }

    # Define an Extension object that describes the Antlr accelerator
    parser_ext = Extension(
        name="fugue_sql_antlr_cpp.sa_fugue_sql_cpp_parser",
        include_dirs=["fugue_sql_antlr_cpp/antlr4-cpp-runtime"],
        sources=get_files("fugue_sql_antlr_cpp/src", "*.cpp")
        + get_files("fugue_sql_antlr_cpp/antlr4-cpp-runtime", "*.cpp"),
        depends=get_files("fugue_sql_antlr_cpp/src", "*.h")
        + get_files("fugue_sql_antlr_cpp/antlr4-cpp-runtime", "*.h"),
        extra_compile_args=extra_compile_args.get(get_target(), []),
    )
    return [parser_ext]


def get_packages():
    pkgs = find_packages()
    if _BUILD_CPP:
        return [
            x
            for x in pkgs
            if x.split(".")[0] in ["fugue_sql_antlr_cpp", "fugue_sql_antlr_version"]
        ]
    return [
        x
        for x in pkgs
        if x.split(".")[0] in ["fugue_sql_antlr", "fugue_sql_antlr_version"]
    ]


setup(
    name="fugue-sql-antlr-cpp" if _BUILD_CPP else "fugue-sql-antlr",
    version=get_version(),
    packages=get_packages(),
    description="Fugue SQL Antlr C++ Parser"
    if _BUILD_CPP
    else "Fugue SQL Antlr Parser",
    long_description=LONG_DESCRIPTION,
    long_description_content_type="text/markdown",
    license="Apache-2.0",
    author="The Fugue Development Team",
    author_email="hello@fugue.ai",
    keywords="distributed spark dask sql dsl domain specific language",
    url="http://github.com/fugue-project/fugue",
    install_requires=[
        "triad",
        "antlr4-python3-runtime>=4.10",
        "jinja2",
    ],
    extras_require={}
    if _BUILD_CPP
    else {
        "cpp": ["fugue-sql-antlr-cpp==" + get_version()],
        "test": ["speedy_antlr_tool"],
    },
    classifiers=[
        # "3 - Alpha", "4 - Beta" or "5 - Production/Stable"
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Developers",
        "Topic :: Software Development :: Libraries :: Python Modules",
        "License :: OSI Approved :: Apache Software License",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.6",
        "Programming Language :: Python :: 3.7",
        "Programming Language :: Python :: 3.8",
        "Programming Language :: Python :: 3.9",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3 :: Only",
    ],
    python_requires=">=3.6",
    package_data={"fugue_sql_antlr_cpp": package_files("fugue_sql_antlr_cpp")},
    ext_modules=get_ext_modules(),
)
