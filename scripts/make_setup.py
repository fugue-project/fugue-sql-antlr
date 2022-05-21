import sys

mode = bool(int(sys.argv[1]))

with open("setup.py", "w") as f:
    f.writelines(
        ["# pylint: disable-all\n", "# flake8: noqa\n", f"_BUILD_CPP = {mode}\n\n"]
    )
    with open("setup.template", "r") as ff:
        f.writelines(ff.readlines())
