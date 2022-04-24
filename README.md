# tree-sitter-todotxt

This is an implementation of [tree-sitter](https://github.com/tree-sitter/tree-sitter)
for [todo.txt](https://github.com/todotxt/todo.txt) file format.

## How to develop

- make changes to `grammar.js` and/or `src/scanner.c`

- format your code

  - clang using [clang-format](https://www.kernel.org/doc/html/latest/process/clang-format.html)
  - js using [prettier](https://prettier.io/)

- run test cases

```
make test
```

- run test cases with debug option if necessary

```
make test-debug
```

