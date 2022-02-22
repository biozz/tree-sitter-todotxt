export PATH := $(PATH):./node_modules/.bin

generate:
	tree-sitter generate

test: generate
	tree-sitter test

