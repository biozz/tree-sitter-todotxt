module.exports = grammar({
  name: 'todotxt',

  // for proper newline handling
  extras: $ => [/\s/],

  rules: {
    todotxt: $ => repeat($.task),
    task: $ => seq(
        optional($.done),
        repeat($._content),
        $._newline,
    ),
    done: $ => /x/,

    _content: $ => choice($.project, $.context, $.tag, $._word),
    project: $ => /\+\w+/,
    context: $ => /@\w+/,
    tag: $ => /\w+:\w+/,

    priority: $ => /\([A-Z]\)/,

    _date: $ => /\d{4}-\d{2}-\d{2}/,
    completion_date: $ => prec(1, $._date),
    creation_date: $ => prec(2, $._date),

    _word: $ => token(seq(/.*/)),

    _newline: $ => /\n/,
  }
});

