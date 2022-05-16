.PHONY: help clean dev docs package test

# .EXPORT_ALL_VARIABLES:
# ARROW_PRE_0_15_IPC_FORMAT = 0

devenv:
	pip3 install -r requirements.txt
	pre-commit install
	pip freeze

docs:
	rm -rf docs/api
	rm -rf docs/api_sql
	rm -rf docs/api_spark
	rm -rf docs/api_dask
	rm -rf docs/api_duckdb
	rm -rf docs/api_ibis
	rm -rf docs/build
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api fugue/
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api_sql fugue_sql/
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api_spark fugue_spark/
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api_dask fugue_dask/
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api_duckdb fugue_duckdb/
	sphinx-apidoc --no-toc -f -t=docs/_templates -o docs/api_ibis fugue_ibis/
	sphinx-build -b html docs/ docs/build/

lint:
	pre-commit run --all-files

package:
	rm -rf dist/*
	python3 setup.py sdist
	python3 setup.py bdist_wheel

jupyter:
	mkdir -p tmp
	pip install .
	jupyter nbextension install --py fugue_notebook
	jupyter nbextension enable fugue_notebook --py
	jupyter notebook --port=8888 --ip=0.0.0.0 --no-browser --allow-root --NotebookApp.token='' --NotebookApp.password='' --NotebookApp.allow_origin='*'

test:
	python3 -bb -m pytest --reruns 2 --only-rerun 'Overflow in cast' --only-rerun 'Table or view not found' tests/

installlocal:
	scripts/make_setup.sh 1
	pip install -e .
	scripts/make_setup.sh 0
	pip install -e .

sql:
	scripts/generate_code.sh
