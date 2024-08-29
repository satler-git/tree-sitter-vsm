/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'vsm',

  extras: $ => [
    /\s+/,
    $.line_comment,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(seq($._statement, optional('\n'))),

    line_comment: $ => token(seq(optional(/\s*/), '#', /.*/)),

    _statement: $ => choice(
      // TODO:
      $.quit_statement,
      $.imm_statement
    ),

    quit_statement: $ => 'quit',

    ptr: $ => seq(/\$(m|n|lm|ln)/, choice(
        seq(/\d+/, optional(/v\d+/)),
        seq(
          '[',
          /\d+/,
          seq(',', /\d+/),
          seq(',', /\d+/),
          seq(',', /\d+/),
          ']'
        ),
      ),
    ),

    natural_num: $ => $._num,

    _num: $ => choice(
      /\d+/,
      /0b[0-1]+/,
      /0o[0-7]+/,
      /0x[0-9A-Fa-f]+/,
    ),

    immudate_num: $ => choice(
      seq(/(f|h)"/, optional(/-|\+/), /\d+.\d+/, /"/),
      seq(/(i|s)"/, optional(/-|\+/), $._num, /"/),
      seq(/(ui|us)"/, $._num, /"/),
    ),

    tag: $ => /i[0-9A-Fa-f][0-9A-Fa-f]/,

    imm_statement: $ => seq('imm', $.immudate_num, $.ptr)
  }
})
