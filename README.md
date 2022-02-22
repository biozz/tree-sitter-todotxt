# tree-sitter-todotxt

This is an implementation of [tree-sitter](https://github.com/tree-sitter/tree-sitter)
for [todo.txt](https://github.com/todotxt/todo.txt) file format.

For now it supports only the most basic features.

I am struggling with tree-sitter support for newline separators.

Also these test cases fail and need to be fixed:

```todotxt
task (sdfasdf) @@a
```
