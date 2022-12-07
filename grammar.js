module.exports = grammar({
  name: 'yuck',
  
  rules: {
    // This starts the parse tree at the file level and reads the files
    source_file: $ => repeat($._statement),

    // Statements a yuck file can make
    _statement: $ => choice(
      $.widget,
      $.defs
    ),

    // Widget list
    widget: $ => choice(
      $.box_widget
    ),
    
    defs: $ => choice(
      $.defwidget
    ),

    defwidget: $ => seq(
       '(',
       'defwidget',
       $.identifier,
       '[',
       ']',
       repeat($.widget),
       ')'
    ),


    // Box Widget
    box_widget: $ => seq(
      '(',
      'box',
      repeat($.box_widget_props),
      ')'
    ),

    box_widget_props: $ => choice(
        seq(':orientation', $.string),
        seq(':class', $.string),
        seq(':halign', $.string),
    ),


    // Data types
    string: $ => seq(
      '"',
      repeat(/./),
      '"'
    ),

    // TODO: Add _ and - as well as captials
    identifier: $ => /[a-z]+/,
    number: $ => /\d+/,
  }
});