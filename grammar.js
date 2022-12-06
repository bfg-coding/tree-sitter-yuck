const SYMBOL = choice(
  ':',
  seq('.', /[^(){}\[\]"'~;,@`\s]*/),
  /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,
)

module.exports = grammar({
  name: 'yuck',
  
  word: $ => $.symbol,
  
  extras: $ => [
    /\s/,
    $.comment,
  ],
    
  rules: {
            
    symbol: $ => token(SYMBOL),
    comment: $ => token(seq(';;', /.*/)),
  
    source_file: $ => repeat($._sexp),
    
    _sexp: $ => choice(
      $._widgets,
      $.symbol
    ),

    _widgets: $ => choice(
      $.box
    ),
    
    box_props: $ => choice(
      seq(':spacing', $.string),
      seq(':orientation', $.string),
      seq(':space-evenly', $.string),
    ),
    
    box: $ => seq(
      '(',
      'box',
      repeat($.box_props),
      ')'   
    ),
    
    string: $ => choice(
      /:[^(){}\[\]"'~;,@`\s]+/,
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $.escape_sequence,
        )),
        '"',
      ),
    ),
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu\d]/,
        /\d{1,3}/,
        /x[\da-fA-F]{2}/,
        /u{[\da-fA-F]+}/,
      ),
    )),
  }
});