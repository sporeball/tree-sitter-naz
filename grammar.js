module.exports = grammar({
  name: 'naz',

  rules: {
    // TODO: add the rest of the grammar rules
    source_file: $ => repeat(choice(
      $.arithmetic,
      $.function,
      $.function_write,
      $.variable,
      $.variable_write,
      $.conditional,
      $.opcode,
      $.halt
    )),

    add: $ => /[0-9]a/,
    subtract: $ => /[0-9]s/,
    multiply: $ => /[0-9]m/,
    divide: $ => /[1-9]d/,
    modulo: $ => /[1-9]p/,
    arithmetic: $ => prec(2, choice(
      $.add,
      $.subtract,
      $.multiply,
      $.divide,
      $.modulo
    )),

    halt: $ => /[0-9]h/,

    opcode_0: $ => "0x",
    opcode_1: $ => "1x",
    opcode_2: $ => "2x",
    opcode_3: $ => "3x",
    opcode: $ => choice($.opcode_0, $.opcode_1, $.opcode_2, $.opcode_3),

    function: $ => /[0-9]f/,
    function_write: $ => prec(2, seq($.opcode_1, $.function)),

    variable: $ => /[0-9]v/,
    variable_write: $ => prec(2, seq($.opcode_2, $.variable)),

    condition: $ => /[0-9][egl]/,
    conditional: $ => prec(2, seq($.opcode_3, $.variable, $.condition))
  }
});
