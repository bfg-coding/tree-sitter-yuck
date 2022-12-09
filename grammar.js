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
      $._defs
    ),

    // Widget list
    widget: $ => seq(
      '(',
      choice($.reserved_widget, $.identifier),
      optional(repeat($.widget_props)),
      ')'
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

    widget_props: $ => seq(
      ':',
      $.identifier,
      choice($.string, $.conditional, $.identifier, $.boolean, $.number)
    ),

    _defs: $ => choice(
      $.defwidget
    ),

    defwidget: $ => seq(
       '(',
       $.reserved_defs,
       $.identifier,
       '[',
       optional(repeat($.vars)),
       ']',
       repeat($.widget),
       ')'
    ),

    vars: $ => choice(
      $.identifier,
      seq('?', $.identifier)
    ),

    // Data types
    string: $ => seq(
      '"',
      repeat(choice($.template_subsitution, /./)),
      '"'
    ),

    boolean: $ => choice(
      $.true,
      $.false
    ),

    // Conditional
    conditional: $ => seq(
      '{',
      $.identifier,
      '?:',
      $.string, // Maybe any data type
      '}'
    ),

    // Template subsitution
    template_subsitution: $ => seq(
      '${',
      $.identifier,
      '}'
    ),

    // TODO: Add boolean
    symbol: $ => token(SYMBOL),
    comment: $ => token(seq(';;', /.*/)),
    identifier: $ => /[a-zA-Z0-9-_]+/,
    number: $ => /\d+/,
    true: $ => 'true',
    false: $ => 'false'
  }
});