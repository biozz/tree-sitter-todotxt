module.exports = grammar({
  name: 'todotxt',

  rules: {
    todotxt: $ => repeat($.task),
    task: $ => seq(
        optional($.done),
        optional($.priority),
        optional($.completion_date),
        optional($.creation_date),
        repeat($._description),
        $._end_of_task,
    ),
    done: $ => /[xX]\s/,
    priority: $ => /\([A-Z]\)\s/,
    _date: $ => /\d{4}-\d{2}-\d{2}\s/,
    completion_date: $ => $._date,
    creation_date: $ => prec(2, $._date),
    _description: $ => choice(
        $.project,
        $.context,
        $.tag,
        $.word,
    ),
    word: $ => token(/\w+/),
    project: $ => /\s?\+\w+\s?/,
    context: $ => /\s?@\w+\s?/,
    tag: $ => /\w+:\w+/,
    _end_of_task: $ => choice(/\r/, /\n/, /\u2028/),
  }
});

