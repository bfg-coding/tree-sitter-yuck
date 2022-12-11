const SYMBOL = choice(
    ':',
    seq('.', /[^(){}\[\]"'~;,@`\s]*/),
    /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,
);


module.exports = grammar({
  name: 'yuck',

  rules: {
    // This starts the parse tree at the file level and reads the files
    source_file: $ => repeat($._statement),

    // Statements a yuck file can make
    _statement: $ => choice(
      $.widget,
      $.defwidget
    ),

    // Widget list
    widget: $ => seq(
      '(',
      choice($.reserved_widget, $.identifier),
      optional(repeat($.widget_props)),
      optional(repeat($.widget)),
      ')'
    ),

    _reserved: $ => choice(
      $.reserved_defs,
      $.reserved_widget
    ),

    reserved_widget: $ => choice(
      'box',
      'eventbox',
      'revealer',
      'combo-box-text',
      'expander',
      'revealer',
      'checkbox',
      'color-button',
      'color-chooser',
      'scale',
      'progress',
      'input',
      'button',
      'image',
      'overlay',
      'centerbox',
      'scroll',
      'label',
      'literal',
      'calendar',
      'transform',
      'circular-progress',
      'graph',
      'children'
    ),

    reserved_defs: $ => choice(
      'defwidget',
      'defvar',
      'deflisten',
      'defpoll',
      'defwindow'
    ),

    _operators: $ => choice(
      // mathatical
      "+",
      "-",
      "*",
      "/",
      "%",
      // elvis (else is) operator
      "?:",
      // Safe access
      "?."
    ),

    comparison_operators: $ => choice(
      // comparisons
      "==",
      "!=",
      "<",
      ">",
      "<=",
      ">=",
      // boolean
      "||",
      "&&",
      "!",
    ),

    widget_props: $ => seq(
      ':',
      $.identifier,
      repeat(
        choice($.string, $.conditional, $.boolean, $.number, $.literal, $.identifier),
      ),
    ),

    defwidget: $ => seq(
       '(',
       $.reserved_defs,
       field('name', $.identifier),
       optional(seq(
         '[',
         optional(repeat($.vars)),
         ']',
       )),
       repeat(choice($.widget, $.string)),
       ')'
    ),

    literal: $ => seq(
      "{",
      $.identifier,
      "}"
    ),

    vars: $ => field(
      'var',
      choice(
        $.identifier,
        seq('?', $.identifier)
      )
    ),

    // Data types
    string: $ => seq(
      '"',
      repeat(choice($.template_subsitution, /./)),
      '"'
    ),

    boolean: $ => choice(
      'true',
      'false'
    ),

    // Conditional
    conditional: $ => seq(
      '{',
      choice(
        $._ternary_seq,
        $._elvis_seq
      ),
      '}'
    ),

    _conditional: $ => seq(
      $._any,
      optional($.comparison_operators),
      optional($._any)
    ),

    // Ternary
    _ternary_seq: $ => seq(
      $._conditional,
      "?",
      $._any,
      ":",
      $._any
    ),

    // Elvis
    _elvis_seq: $ => seq(
      $._conditional,
      "?:",
      $._any
    ),

    // Template subsitution
    template_subsitution: $ => seq(
      '${',
      $.identifier,
      '}'
    ),

    symbol: $ => token(SYMBOL),
    comment: $ => token(seq(';', /.*/)),
    identifier: $ => /[a-zA-Z0-9-_]+/,
    number: $ => /\d+/,
    _any: $ => choice($.string, $.identifier, $.number, $._reserved, $.boolean)
  }
});