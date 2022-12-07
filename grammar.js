module.exports = grammar({
  name: 'yuck',
  
  rules: {
    // This starts the parse tree at the file level and reads the files
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.widget
    ),

    widget: $ => choice(
      $.box_widget
    ),
    
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

    string: $ => seq(
      '"',
      repeat(/./),
      '"'
    ),

    identifier: $ => /[a-z]+/,
    number: $ => /\d+/,
  }
});