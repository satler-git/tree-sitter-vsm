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
    ),
    quit_statement: $ => 'quit',
  }
})
