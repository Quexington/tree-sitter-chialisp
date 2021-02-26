#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_mod_definition_token1 = 1,
  anon_sym_RPAREN = 2,
  aux_sym_parameter_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_DOT = 5,
  sym_comment = 6,
  sym_hexadecimal = 7,
  sym_integer = 8,
  sym_string = 9,
  aux_sym_function_def_token1 = 10,
  aux_sym_constant_def_token1 = 11,
  sym_constant_ref = 12,
  aux_sym_list_op_token1 = 13,
  aux_sym_if_token1 = 14,
  aux_sym_raise_token1 = 15,
  aux_sym_ops_token1 = 16,
  aux_sym_quote_token1 = 17,
  aux_sym_builtin_token1 = 18,
  aux_sym_opcode_token1 = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_mod_definition = 22,
  sym_parameter = 23,
  sym_multiple_parameters = 24,
  sym_statement = 25,
  sym_primitive = 26,
  sym_variable = 27,
  sym_function_def = 28,
  sym_function_identifier = 29,
  sym_function_call = 30,
  sym_constant_def = 31,
  sym_list_op = 32,
  sym_list = 33,
  sym_if = 34,
  sym_raise = 35,
  sym_ops = 36,
  sym_quote = 37,
  sym_builtin = 38,
  sym_opcode = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_mod_definition_repeat1 = 41,
  aux_sym_multiple_parameters_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_mod_definition_token1] = "mod_definition_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_hexadecimal] = "hexadecimal",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [aux_sym_function_def_token1] = "function_def_token1",
  [aux_sym_constant_def_token1] = "constant_def_token1",
  [sym_constant_ref] = "constant_ref",
  [aux_sym_list_op_token1] = "list_op_token1",
  [aux_sym_if_token1] = "if_token1",
  [aux_sym_raise_token1] = "raise_token1",
  [aux_sym_ops_token1] = "ops_token1",
  [aux_sym_quote_token1] = "quote_token1",
  [aux_sym_builtin_token1] = "builtin_token1",
  [aux_sym_opcode_token1] = "opcode_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_mod_definition] = "mod_definition",
  [sym_parameter] = "parameter",
  [sym_multiple_parameters] = "multiple_parameters",
  [sym_statement] = "statement",
  [sym_primitive] = "primitive",
  [sym_variable] = "variable",
  [sym_function_def] = "function_def",
  [sym_function_identifier] = "function_identifier",
  [sym_function_call] = "function_call",
  [sym_constant_def] = "constant_def",
  [sym_list_op] = "list_op",
  [sym_list] = "list",
  [sym_if] = "if",
  [sym_raise] = "raise",
  [sym_ops] = "ops",
  [sym_quote] = "quote",
  [sym_builtin] = "builtin",
  [sym_opcode] = "opcode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_mod_definition_repeat1] = "mod_definition_repeat1",
  [aux_sym_multiple_parameters_repeat1] = "multiple_parameters_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_mod_definition_token1] = aux_sym_mod_definition_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [aux_sym_function_def_token1] = aux_sym_function_def_token1,
  [aux_sym_constant_def_token1] = aux_sym_constant_def_token1,
  [sym_constant_ref] = sym_constant_ref,
  [aux_sym_list_op_token1] = aux_sym_list_op_token1,
  [aux_sym_if_token1] = aux_sym_if_token1,
  [aux_sym_raise_token1] = aux_sym_raise_token1,
  [aux_sym_ops_token1] = aux_sym_ops_token1,
  [aux_sym_quote_token1] = aux_sym_quote_token1,
  [aux_sym_builtin_token1] = aux_sym_builtin_token1,
  [aux_sym_opcode_token1] = aux_sym_opcode_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_mod_definition] = sym_mod_definition,
  [sym_parameter] = sym_parameter,
  [sym_multiple_parameters] = sym_multiple_parameters,
  [sym_statement] = sym_statement,
  [sym_primitive] = sym_primitive,
  [sym_variable] = sym_variable,
  [sym_function_def] = sym_function_def,
  [sym_function_identifier] = sym_function_identifier,
  [sym_function_call] = sym_function_call,
  [sym_constant_def] = sym_constant_def,
  [sym_list_op] = sym_list_op,
  [sym_list] = sym_list,
  [sym_if] = sym_if,
  [sym_raise] = sym_raise,
  [sym_ops] = sym_ops,
  [sym_quote] = sym_quote,
  [sym_builtin] = sym_builtin,
  [sym_opcode] = sym_opcode,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_mod_definition_repeat1] = aux_sym_mod_definition_repeat1,
  [aux_sym_multiple_parameters_repeat1] = aux_sym_multiple_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_mod_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_def_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_def_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_constant_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_op_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raise_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ops_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_mod_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_multiple_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_def] = {
    .visible = true,
    .named = true,
  },
  [sym_list_op] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_raise] = {
    .visible = true,
    .named = true,
  },
  [sym_ops] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiple_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '5') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'q') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'q') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 98:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '0') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_mod_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(99);
      if (lookahead == '5') ADVANCE(108);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'q') ADVANCE(75);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_function_def_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_def_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_constant_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_list_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_if_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_raise_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_ops_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_builtin_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 110},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 110},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 110},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_function_def_token1] = ACTIONS(1),
    [aux_sym_constant_def_token1] = ACTIONS(1),
    [sym_constant_ref] = ACTIONS(1),
    [aux_sym_list_op_token1] = ACTIONS(1),
    [aux_sym_if_token1] = ACTIONS(1),
    [aux_sym_raise_token1] = ACTIONS(1),
    [aux_sym_ops_token1] = ACTIONS(1),
    [aux_sym_quote_token1] = ACTIONS(1),
    [aux_sym_builtin_token1] = ACTIONS(1),
    [aux_sym_opcode_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__definition] = STATE(60),
    [sym_mod_definition] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_mod_definition_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [3] = {
    [sym_statement] = STATE(9),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(9),
    [anon_sym_RPAREN] = ACTIONS(39),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(41),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [4] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(43),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [5] = {
    [sym_statement] = STATE(4),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(4),
    [anon_sym_RPAREN] = ACTIONS(45),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(47),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [6] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(49),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [7] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym_parameter_token1] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_comment] = ACTIONS(59),
    [sym_hexadecimal] = ACTIONS(62),
    [sym_integer] = ACTIONS(62),
    [sym_string] = ACTIONS(65),
    [aux_sym_function_def_token1] = ACTIONS(68),
    [aux_sym_constant_def_token1] = ACTIONS(71),
    [sym_constant_ref] = ACTIONS(74),
    [aux_sym_list_op_token1] = ACTIONS(77),
    [aux_sym_if_token1] = ACTIONS(80),
    [aux_sym_raise_token1] = ACTIONS(83),
    [aux_sym_ops_token1] = ACTIONS(86),
    [aux_sym_quote_token1] = ACTIONS(89),
    [aux_sym_builtin_token1] = ACTIONS(92),
    [aux_sym_opcode_token1] = ACTIONS(95),
  },
  [8] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(98),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [9] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(100),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [10] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(102),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [11] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(104),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [12] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(106),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [13] = {
    [sym_statement] = STATE(16),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(108),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(110),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [14] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(112),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [15] = {
    [sym_statement] = STATE(8),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(8),
    [anon_sym_RPAREN] = ACTIONS(114),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(116),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [16] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(118),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [17] = {
    [sym_statement] = STATE(6),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(6),
    [anon_sym_RPAREN] = ACTIONS(120),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(122),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [18] = {
    [sym_statement] = STATE(14),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(14),
    [anon_sym_RPAREN] = ACTIONS(124),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(126),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [19] = {
    [sym_statement] = STATE(2),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(2),
    [anon_sym_RPAREN] = ACTIONS(128),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(130),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [20] = {
    [sym_statement] = STATE(12),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(12),
    [anon_sym_RPAREN] = ACTIONS(132),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(134),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [21] = {
    [sym_statement] = STATE(11),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(11),
    [anon_sym_RPAREN] = ACTIONS(136),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(138),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
  [22] = {
    [sym_statement] = STATE(10),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(10),
    [anon_sym_RPAREN] = ACTIONS(140),
    [aux_sym_parameter_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_comment] = ACTIONS(142),
    [sym_hexadecimal] = ACTIONS(15),
    [sym_integer] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [aux_sym_function_def_token1] = ACTIONS(19),
    [aux_sym_constant_def_token1] = ACTIONS(21),
    [sym_constant_ref] = ACTIONS(23),
    [aux_sym_list_op_token1] = ACTIONS(25),
    [aux_sym_if_token1] = ACTIONS(27),
    [aux_sym_raise_token1] = ACTIONS(29),
    [aux_sym_ops_token1] = ACTIONS(31),
    [aux_sym_quote_token1] = ACTIONS(33),
    [aux_sym_builtin_token1] = ACTIONS(35),
    [aux_sym_opcode_token1] = ACTIONS(37),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(146), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(144), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [22] = 2,
    ACTIONS(150), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(148), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [44] = 2,
    ACTIONS(154), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(152), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [66] = 2,
    ACTIONS(158), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(156), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [88] = 2,
    ACTIONS(162), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(160), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [110] = 2,
    ACTIONS(166), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(164), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [132] = 2,
    ACTIONS(170), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(168), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [154] = 2,
    ACTIONS(174), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(172), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [176] = 2,
    ACTIONS(178), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(176), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [198] = 2,
    ACTIONS(182), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(180), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [220] = 2,
    ACTIONS(186), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(184), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [242] = 2,
    ACTIONS(190), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(188), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [264] = 2,
    ACTIONS(194), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(192), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [286] = 2,
    ACTIONS(198), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(196), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [308] = 2,
    ACTIONS(202), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(200), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [330] = 2,
    ACTIONS(206), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(204), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [352] = 2,
    ACTIONS(210), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(208), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [374] = 2,
    ACTIONS(214), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(212), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [396] = 2,
    ACTIONS(218), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(216), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [418] = 2,
    ACTIONS(222), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(220), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [440] = 2,
    ACTIONS(226), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(224), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [462] = 2,
    ACTIONS(230), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(228), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [484] = 2,
    ACTIONS(234), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(232), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [506] = 2,
    ACTIONS(238), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(236), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [528] = 2,
    ACTIONS(242), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(240), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [550] = 2,
    ACTIONS(246), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(244), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [572] = 2,
    ACTIONS(250), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(248), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [594] = 5,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 1,
      aux_sym_parameter_token1,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(50), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [613] = 5,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      aux_sym_parameter_token1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(50), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [632] = 5,
    ACTIONS(265), 1,
      aux_sym_parameter_token1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(54), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [651] = 5,
    ACTIONS(265), 1,
      aux_sym_parameter_token1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(51), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [670] = 5,
    ACTIONS(265), 1,
      aux_sym_parameter_token1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(50), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [689] = 5,
    ACTIONS(25), 1,
      aux_sym_list_op_token1,
    ACTIONS(281), 1,
      aux_sym_parameter_token1,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_function_identifier,
    STATE(69), 2,
      sym_function_call,
      sym_list_op,
  [706] = 1,
    ACTIONS(152), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [714] = 1,
    ACTIONS(160), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [722] = 1,
    ACTIONS(240), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [730] = 3,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      aux_sym_mod_definition_token1,
    STATE(59), 3,
      sym__definition,
      sym_mod_definition,
      aux_sym_source_file_repeat1,
  [742] = 3,
    ACTIONS(5), 1,
      aux_sym_mod_definition_token1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    STATE(59), 3,
      sym__definition,
      sym_mod_definition,
      aux_sym_source_file_repeat1,
  [754] = 3,
    ACTIONS(292), 1,
      aux_sym_parameter_token1,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
      sym_parameter,
      sym_multiple_parameters,
  [765] = 3,
    ACTIONS(15), 1,
      sym_integer,
    STATE(72), 1,
      sym_primitive,
    ACTIONS(17), 2,
      sym_hexadecimal,
      sym_string,
  [776] = 3,
    ACTIONS(292), 1,
      aux_sym_parameter_token1,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    STATE(5), 2,
      sym_parameter,
      sym_multiple_parameters,
  [787] = 2,
    ACTIONS(296), 1,
      aux_sym_parameter_token1,
    STATE(63), 1,
      sym_function_identifier,
  [794] = 2,
    ACTIONS(281), 1,
      aux_sym_parameter_token1,
    STATE(17), 1,
      sym_function_identifier,
  [801] = 1,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym_mod_definition_token1,
  [806] = 1,
    ACTIONS(168), 2,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
  [811] = 1,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_mod_definition_token1,
  [816] = 1,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [820] = 1,
    ACTIONS(304), 1,
      sym_constant_ref,
  [824] = 1,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
  [828] = 1,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 22,
  [SMALL_STATE(25)] = 44,
  [SMALL_STATE(26)] = 66,
  [SMALL_STATE(27)] = 88,
  [SMALL_STATE(28)] = 110,
  [SMALL_STATE(29)] = 132,
  [SMALL_STATE(30)] = 154,
  [SMALL_STATE(31)] = 176,
  [SMALL_STATE(32)] = 198,
  [SMALL_STATE(33)] = 220,
  [SMALL_STATE(34)] = 242,
  [SMALL_STATE(35)] = 264,
  [SMALL_STATE(36)] = 286,
  [SMALL_STATE(37)] = 308,
  [SMALL_STATE(38)] = 330,
  [SMALL_STATE(39)] = 352,
  [SMALL_STATE(40)] = 374,
  [SMALL_STATE(41)] = 396,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 440,
  [SMALL_STATE(44)] = 462,
  [SMALL_STATE(45)] = 484,
  [SMALL_STATE(46)] = 506,
  [SMALL_STATE(47)] = 528,
  [SMALL_STATE(48)] = 550,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 594,
  [SMALL_STATE(51)] = 613,
  [SMALL_STATE(52)] = 632,
  [SMALL_STATE(53)] = 651,
  [SMALL_STATE(54)] = 670,
  [SMALL_STATE(55)] = 689,
  [SMALL_STATE(56)] = 706,
  [SMALL_STATE(57)] = 714,
  [SMALL_STATE(58)] = 722,
  [SMALL_STATE(59)] = 730,
  [SMALL_STATE(60)] = 742,
  [SMALL_STATE(61)] = 754,
  [SMALL_STATE(62)] = 765,
  [SMALL_STATE(63)] = 776,
  [SMALL_STATE(64)] = 787,
  [SMALL_STATE(65)] = 794,
  [SMALL_STATE(66)] = 801,
  [SMALL_STATE(67)] = 806,
  [SMALL_STATE(68)] = 811,
  [SMALL_STATE(69)] = 816,
  [SMALL_STATE(70)] = 820,
  [SMALL_STATE(71)] = 824,
  [SMALL_STATE(72)] = 828,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(55),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(36),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(64),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(70),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(26),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(20),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(21),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(22),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_op, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_op, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_parameters, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiple_parameters, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_identifier, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_def, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_def, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_op, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_op, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ops, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ops, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ops, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ops, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_parameters, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiple_parameters, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(56),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(53),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_definition, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_definition, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Chialisp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
