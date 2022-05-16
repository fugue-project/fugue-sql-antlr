#!/bin/bash

(echo "# pylint: disable-all" && echo "# flake8: noqa" && echo "_BUILD_CPP = bool(${1})" && cat setup.template) > setup.py
