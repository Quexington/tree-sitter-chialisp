module.exports = grammar({
  name: 'Chialisp',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.statement,
      $.comment
    ),

    mod_definition: $ => seq(
      /\(mod\s*/,
      choice($.parameter,$.multiple_parameters),
      repeat(choice($.comment,$.statement)),
      ')',
    ),

    parameter: $ => /[a-zA-Z0-9_-]+/,
    multiple_parameters: $ => seq(
      '(',
      repeat(choice($.variable,$.comment,'.',$.multiple_parameters)),
      ')'
    ),

    comment: $ => /;.*\r\n/,

    statement: $ => choice(
      $.mod_definition,
      $.primitive,
      $.variable,
      $.function_def,
      $.function_call,
      $.constant_def,
      $.constant_ref,
      $.list_op,
      $.list,
      $.if,
      $.raise,
      $.ops,
      $.quote,
      $.builtin,
      $.opcode,
    ),

    primitive: $ => choice(
      $.hexadecimal,
      $.integer,
      $.string,
      $.false,
    ),
    hexadecimal: $ => /0x[0-9a-fA-F]+/,
    integer: $ => /\d+/,
    string: $ => /([\"'`])(?:[\s\S])*?.*([\"'`])/,
    false: $ => "()",

    variable: $ => /[a-zA-Z0-9_-]+/,

    function_def: $ => seq(
      /\((defun|defun-inline|defmacro)\s+/,
      $.function_identifier,
      choice($.parameter,$.multiple_parameters),
      repeat(choice($.comment,$.statement)),
      ')',
    ),
    function_identifier: $ => /[a-zA-Z0-9_-]+/,
    function_call: $ => seq(
      '(',
      $.function_identifier,
      repeat(choice($.comment,$.statement)),
      ')',
    ),

    constant_def: $ => seq(
      /\(defconstant\s+/,
      $.constant_ref,
      $.primitive,
      ')'
    ),

    constant_ref: $ => /[A-Z0-9_-]+/,

    list_op: $ => seq(
      /\((c|f|r|l|a|list)\s+/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    list: $ => seq(
      '(',
      choice($.function_call,$.list_op),
      ')',
    ),

    if: $ => seq(
      /\((i|if)\s+/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    raise: $ => seq(
      /\(x\s*/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    ops: $ => seq(
      /\((=|>|>s|\+|-|\*|divmod)\s+/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    quote: $ => seq(
      /\((qq|q|unquote)\s+[\.]*\s*/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    builtin: $ => seq(
      /\((logand|logior|logxor|lognot|ash|lsh|substr|strlen|concat|sha256|sha256tree|point_add|pubkey_for_exp)\s+/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),

    opcode: $ => seq(
      /\((50|51|52|53|54|55|56|57|60)\s+/,
      repeat(choice($.comment,$.statement)),
      ')'
    ),
  }
});
