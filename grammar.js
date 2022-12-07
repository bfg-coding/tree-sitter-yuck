module.exports = grammar({
  name: 'yuck',
  
  rules: {
    // This starts the parse tree at the file level and reads the files
    source_file: $ => repeat($._statement),

    // Statements a yuck file can make
    _statement: $ => choice(
      $._widget,
      $._defs
    ),

    // Widget list
    _widget: $ => choice(
      $.box_widget,
      $.eventbox_widget,
      $.revealer_widget,
      $.children
    ),
    
    _defs: $ => choice(
      $.defwidget
    ),

    defwidget: $ => seq(
       '(',
       'defwidget',
       $.identifier,
       '[',
       optional(repeat($.vars)),
       ']',
       repeat($._widget),
       ')'
    ),

    vars: $ => choice(
      $.identifier,
      seq('?', $.identifier)
    ),


    // Box Widget
    box_widget: $ => seq(
      '(',
      'box',
      optional(repeat($.box_props)),
      optional(repeat($._widget)),
      ')'
    ),

    box_props: $ => choice(
        seq(':orientation', $.string),
        seq(':class', $.string),
        seq(':halign', $.string),
        seq(':space-evenly', $.identifier) // TODO: create boolean
    ),

    // Eventbox
    eventbox_widget: $ => seq(
      '(',
      'eventbox',
      repeat($.eventbox_props),
      repeat($._widget),
      ')'
    ),

    eventbox_props: $ => choice(
      seq(':class', $.string),
      seq(':onhover', $.string),
      seq(':onhoverlost', $.string)
    ),

    //revealer
    revealer_widget: $ => seq(
      '(',
      'revealer',
      repeat($.revealer_props),
      repeat($._widget),
      ')'
    ),

    revealer_props: $ => choice(
      seq(':reveal', $.identifier),
      seq(':transition', choice($.string, $.conditional)),
      seq(':duration', choice($.string, $.conditional))
    ),

    // Children
    children: $ => seq(
      '(',
      'children',
      ':nth',
      $.number,
      ')'
    ),

    // Data types
    string: $ => seq(
      '"',
      repeat(/./),
      '"'
    ),

    // Conditional
    conditional: $ => seq(
      '{',
      $.identifier,
      '?:',
      $.string, // Maybe any data type
      '}'
    ),

    // TODO: Add _ and - as well as captials
    identifier: $ => /[a-zA-Z-_]+/,
    number: $ => /\d+/,
  }
});