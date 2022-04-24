export PATH := $(PATH):./node_modules/.bin

generate:
	tree-sitter generate

test: generate
	tree-sitter test

test-debug: generate
	tree-sitter test --debug
