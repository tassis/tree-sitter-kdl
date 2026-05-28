#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 369
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 4
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 19

enum {
  sym__normal_bare_identifier = 1,
  anon_sym_SLASH_DASH = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_SEMI = 5,
  sym__identifier_char = 6,
  sym___identifier_char_no_digit = 7,
  sym___identifier_char_no_digit_sign = 8,
  anon_sym_null = 9,
  anon_sym_POUNDnull = 10,
  anon_sym_i8 = 11,
  anon_sym_i16 = 12,
  anon_sym_i32 = 13,
  anon_sym_i64 = 14,
  anon_sym_u8 = 15,
  anon_sym_u16 = 16,
  anon_sym_u32 = 17,
  anon_sym_u64 = 18,
  anon_sym_isize = 19,
  anon_sym_usize = 20,
  anon_sym_f32 = 21,
  anon_sym_f64 = 22,
  anon_sym_decimal64 = 23,
  anon_sym_decimal128 = 24,
  anon_sym_date_DASHtime = 25,
  anon_sym_time = 26,
  anon_sym_date = 27,
  anon_sym_duration = 28,
  anon_sym_decimal = 29,
  anon_sym_currency = 30,
  anon_sym_country_DASH2 = 31,
  anon_sym_country_DASH3 = 32,
  anon_sym_country_DASHsubdivision = 33,
  anon_sym_email = 34,
  anon_sym_idn_DASHemail = 35,
  anon_sym_hostname = 36,
  anon_sym_idn_DASHhostname = 37,
  anon_sym_ipv4 = 38,
  anon_sym_ipv6 = 39,
  anon_sym_url = 40,
  anon_sym_url_DASHreference = 41,
  anon_sym_irl = 42,
  anon_sym_iri_DASHreference = 43,
  anon_sym_url_DASHtemplate = 44,
  anon_sym_uuid = 45,
  anon_sym_regex = 46,
  anon_sym_base64 = 47,
  anon_sym_EQ = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_DQUOTE = 51,
  aux_sym__escaped_string_token1 = 52,
  sym_escape = 53,
  sym_escaped_whitespace = 54,
  sym__hex_digit = 55,
  anon_sym_DOT = 56,
  anon_sym_e = 57,
  anon_sym_E = 58,
  anon_sym__ = 59,
  sym__digit = 60,
  anon_sym_PLUS = 61,
  anon_sym_DASH = 62,
  anon_sym_0x = 63,
  anon_sym_0o = 64,
  aux_sym__octal_token1 = 65,
  anon_sym_0b = 66,
  anon_sym_0 = 67,
  anon_sym_1 = 68,
  anon_sym_POUNDinf = 69,
  anon_sym_POUND_DASHinf = 70,
  anon_sym_POUNDnan = 71,
  anon_sym_true = 72,
  anon_sym_false = 73,
  anon_sym_POUNDtrue = 74,
  anon_sym_POUNDfalse = 75,
  anon_sym_BSLASH = 76,
  aux_sym__newline_token1 = 77,
  aux_sym__newline_token2 = 78,
  aux_sym__newline_token3 = 79,
  aux_sym__newline_token4 = 80,
  aux_sym__newline_token5 = 81,
  aux_sym__newline_token6 = 82,
  aux_sym__newline_token7 = 83,
  aux_sym__newline_token8 = 84,
  sym__bom = 85,
  sym__unicode_space = 86,
  anon_sym_SLASH_SLASH = 87,
  aux_sym_single_line_comment_token1 = 88,
  sym__eof = 89,
  sym_multi_line_comment = 90,
  sym_multi_line_string = 91,
  sym__raw_string = 92,
  sym_document = 93,
  sym_node = 94,
  sym_node_field = 95,
  sym__node_field_comment = 96,
  sym__node_field = 97,
  sym_node_children = 98,
  sym__node_space = 99,
  sym__node_terminator = 100,
  sym_identifier = 101,
  sym__bare_identifier = 102,
  sym_keyword = 103,
  sym_annotation_type = 104,
  sym_prop = 105,
  sym_value = 106,
  sym_type = 107,
  sym_string = 108,
  sym__escaped_string = 109,
  sym_number = 110,
  sym__decimal = 111,
  sym__exponent = 112,
  sym__integer = 113,
  sym__sign = 114,
  sym__hex = 115,
  sym__octal = 116,
  sym__binary = 117,
  sym_keyword_number = 118,
  sym_boolean = 119,
  sym__escline = 120,
  sym__linespace = 121,
  sym__newline = 122,
  sym__ws = 123,
  sym_single_line_comment = 124,
  aux_sym_document_repeat1 = 125,
  aux_sym_document_repeat2 = 126,
  aux_sym_node_repeat1 = 127,
  aux_sym_node_repeat2 = 128,
  aux_sym_node_repeat3 = 129,
  aux_sym__bare_identifier_repeat1 = 130,
  aux_sym__escaped_string_repeat1 = 131,
  aux_sym__integer_repeat1 = 132,
  aux_sym__hex_repeat1 = 133,
  aux_sym__octal_repeat1 = 134,
  aux_sym__binary_repeat1 = 135,
  aux_sym_single_line_comment_repeat1 = 136,
  alias_sym_decimal = 137,
  alias_sym_node_children_comment = 138,
  alias_sym_node_field_comment = 139,
  alias_sym_string_fragment = 140,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__normal_bare_identifier] = "_normal_bare_identifier",
  [anon_sym_SLASH_DASH] = "node_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym__identifier_char] = "_identifier_char",
  [sym___identifier_char_no_digit] = "__identifier_char_no_digit",
  [sym___identifier_char_no_digit_sign] = "__identifier_char_no_digit_sign",
  [anon_sym_null] = "null",
  [anon_sym_POUNDnull] = "#null",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_decimal64] = "decimal64",
  [anon_sym_decimal128] = "decimal128",
  [anon_sym_date_DASHtime] = "date-time",
  [anon_sym_time] = "time",
  [anon_sym_date] = "date",
  [anon_sym_duration] = "duration",
  [anon_sym_decimal] = "decimal",
  [anon_sym_currency] = "currency",
  [anon_sym_country_DASH2] = "country-2",
  [anon_sym_country_DASH3] = "country-3",
  [anon_sym_country_DASHsubdivision] = "country-subdivision",
  [anon_sym_email] = "email",
  [anon_sym_idn_DASHemail] = "idn-email",
  [anon_sym_hostname] = "hostname",
  [anon_sym_idn_DASHhostname] = "idn-hostname",
  [anon_sym_ipv4] = "ipv4",
  [anon_sym_ipv6] = "ipv6",
  [anon_sym_url] = "url",
  [anon_sym_url_DASHreference] = "url-reference",
  [anon_sym_irl] = "irl",
  [anon_sym_iri_DASHreference] = "iri-reference",
  [anon_sym_url_DASHtemplate] = "url-template",
  [anon_sym_uuid] = "uuid",
  [anon_sym_regex] = "regex",
  [anon_sym_base64] = "base64",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__escaped_string_token1] = "_escaped_string_token1",
  [sym_escape] = "escape",
  [sym_escaped_whitespace] = "escaped_whitespace",
  [sym__hex_digit] = "_hex_digit",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym__] = "_",
  [sym__digit] = "_digit",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_0x] = "0x",
  [anon_sym_0o] = "0o",
  [aux_sym__octal_token1] = "_octal_token1",
  [anon_sym_0b] = "0b",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym_POUNDinf] = "#inf",
  [anon_sym_POUND_DASHinf] = "#-inf",
  [anon_sym_POUNDnan] = "#nan",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUNDtrue] = "#true",
  [anon_sym_POUNDfalse] = "#false",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__newline_token1] = "_newline_token1",
  [aux_sym__newline_token2] = "_newline_token2",
  [aux_sym__newline_token3] = "_newline_token3",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [aux_sym__newline_token8] = "_newline_token8",
  [sym__bom] = "_bom",
  [sym__unicode_space] = "_unicode_space",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym__eof] = "_eof",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_multi_line_string] = "multi_line_string",
  [sym__raw_string] = "_raw_string",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym_node_field] = "node_field",
  [sym__node_field_comment] = "_node_field_comment",
  [sym__node_field] = "_node_field",
  [sym_node_children] = "node_children",
  [sym__node_space] = "_node_space",
  [sym__node_terminator] = "_node_terminator",
  [sym_identifier] = "identifier",
  [sym__bare_identifier] = "_bare_identifier",
  [sym_keyword] = "keyword",
  [sym_annotation_type] = "annotation_type",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym__escaped_string] = "_escaped_string",
  [sym_number] = "number",
  [sym__decimal] = "_decimal",
  [sym__exponent] = "exponent",
  [sym__integer] = "_integer",
  [sym__sign] = "_sign",
  [sym__hex] = "_hex",
  [sym__octal] = "_octal",
  [sym__binary] = "_binary",
  [sym_keyword_number] = "keyword_number",
  [sym_boolean] = "boolean",
  [sym__escline] = "_escline",
  [sym__linespace] = "_linespace",
  [sym__newline] = "_newline",
  [sym__ws] = "_ws",
  [sym_single_line_comment] = "single_line_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_node_repeat2] = "node_repeat2",
  [aux_sym_node_repeat3] = "node_repeat3",
  [aux_sym__bare_identifier_repeat1] = "_bare_identifier_repeat1",
  [aux_sym__escaped_string_repeat1] = "_escaped_string_repeat1",
  [aux_sym__integer_repeat1] = "_integer_repeat1",
  [aux_sym__hex_repeat1] = "_hex_repeat1",
  [aux_sym__octal_repeat1] = "_octal_repeat1",
  [aux_sym__binary_repeat1] = "_binary_repeat1",
  [aux_sym_single_line_comment_repeat1] = "single_line_comment_repeat1",
  [alias_sym_decimal] = "decimal",
  [alias_sym_node_children_comment] = "node_children_comment",
  [alias_sym_node_field_comment] = "node_field_comment",
  [alias_sym_string_fragment] = "string_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__normal_bare_identifier] = sym__normal_bare_identifier,
  [anon_sym_SLASH_DASH] = anon_sym_SLASH_DASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__identifier_char] = sym__identifier_char,
  [sym___identifier_char_no_digit] = sym___identifier_char_no_digit,
  [sym___identifier_char_no_digit_sign] = sym___identifier_char_no_digit_sign,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_POUNDnull] = anon_sym_POUNDnull,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_decimal64] = anon_sym_decimal64,
  [anon_sym_decimal128] = anon_sym_decimal128,
  [anon_sym_date_DASHtime] = anon_sym_date_DASHtime,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_currency] = anon_sym_currency,
  [anon_sym_country_DASH2] = anon_sym_country_DASH2,
  [anon_sym_country_DASH3] = anon_sym_country_DASH3,
  [anon_sym_country_DASHsubdivision] = anon_sym_country_DASHsubdivision,
  [anon_sym_email] = anon_sym_email,
  [anon_sym_idn_DASHemail] = anon_sym_idn_DASHemail,
  [anon_sym_hostname] = anon_sym_hostname,
  [anon_sym_idn_DASHhostname] = anon_sym_idn_DASHhostname,
  [anon_sym_ipv4] = anon_sym_ipv4,
  [anon_sym_ipv6] = anon_sym_ipv6,
  [anon_sym_url] = anon_sym_url,
  [anon_sym_url_DASHreference] = anon_sym_url_DASHreference,
  [anon_sym_irl] = anon_sym_irl,
  [anon_sym_iri_DASHreference] = anon_sym_iri_DASHreference,
  [anon_sym_url_DASHtemplate] = anon_sym_url_DASHtemplate,
  [anon_sym_uuid] = anon_sym_uuid,
  [anon_sym_regex] = anon_sym_regex,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__escaped_string_token1] = aux_sym__escaped_string_token1,
  [sym_escape] = sym_escape,
  [sym_escaped_whitespace] = sym_escaped_whitespace,
  [sym__hex_digit] = sym__hex_digit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym__] = anon_sym__,
  [sym__digit] = sym__digit,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym__octal_token1] = aux_sym__octal_token1,
  [anon_sym_0b] = anon_sym_0b,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_POUNDinf] = anon_sym_POUNDinf,
  [anon_sym_POUND_DASHinf] = anon_sym_POUND_DASHinf,
  [anon_sym_POUNDnan] = anon_sym_POUNDnan,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUNDtrue] = anon_sym_POUNDtrue,
  [anon_sym_POUNDfalse] = anon_sym_POUNDfalse,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [aux_sym__newline_token2] = aux_sym__newline_token2,
  [aux_sym__newline_token3] = aux_sym__newline_token3,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [aux_sym__newline_token8] = aux_sym__newline_token8,
  [sym__bom] = sym__bom,
  [sym__unicode_space] = sym__unicode_space,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym__eof] = sym__eof,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_multi_line_string] = sym_multi_line_string,
  [sym__raw_string] = sym__raw_string,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym_node_field] = sym_node_field,
  [sym__node_field_comment] = sym__node_field_comment,
  [sym__node_field] = sym__node_field,
  [sym_node_children] = sym_node_children,
  [sym__node_space] = sym__node_space,
  [sym__node_terminator] = sym__node_terminator,
  [sym_identifier] = sym_identifier,
  [sym__bare_identifier] = sym__bare_identifier,
  [sym_keyword] = sym_keyword,
  [sym_annotation_type] = sym_annotation_type,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym__escaped_string] = sym__escaped_string,
  [sym_number] = sym_number,
  [sym__decimal] = sym__decimal,
  [sym__exponent] = sym__exponent,
  [sym__integer] = sym__integer,
  [sym__sign] = sym__sign,
  [sym__hex] = sym__hex,
  [sym__octal] = sym__octal,
  [sym__binary] = sym__binary,
  [sym_keyword_number] = sym_keyword_number,
  [sym_boolean] = sym_boolean,
  [sym__escline] = sym__escline,
  [sym__linespace] = sym__linespace,
  [sym__newline] = sym__newline,
  [sym__ws] = sym__ws,
  [sym_single_line_comment] = sym_single_line_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_node_repeat2] = aux_sym_node_repeat2,
  [aux_sym_node_repeat3] = aux_sym_node_repeat3,
  [aux_sym__bare_identifier_repeat1] = aux_sym__bare_identifier_repeat1,
  [aux_sym__escaped_string_repeat1] = aux_sym__escaped_string_repeat1,
  [aux_sym__integer_repeat1] = aux_sym__integer_repeat1,
  [aux_sym__hex_repeat1] = aux_sym__hex_repeat1,
  [aux_sym__octal_repeat1] = aux_sym__octal_repeat1,
  [aux_sym__binary_repeat1] = aux_sym__binary_repeat1,
  [aux_sym_single_line_comment_repeat1] = aux_sym_single_line_comment_repeat1,
  [alias_sym_decimal] = alias_sym_decimal,
  [alias_sym_node_children_comment] = alias_sym_node_children_comment,
  [alias_sym_node_field_comment] = alias_sym_node_field_comment,
  [alias_sym_string_fragment] = alias_sym_string_fragment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__normal_bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_char] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit] = {
    .visible = false,
    .named = true,
  },
  [sym___identifier_char_no_digit_sign] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASH3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_country_DASHsubdivision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_email] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHemail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idn_DASHhostname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iri_DASHreference] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_url_DASHtemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escaped_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__octal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfalse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token8] = {
    .visible = false,
    .named = false,
  },
  [sym__bom] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_space] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_string] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_string] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_field] = {
    .visible = true,
    .named = true,
  },
  [sym__node_field_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__node_field] = {
    .visible = false,
    .named = true,
  },
  [sym_node_children] = {
    .visible = true,
    .named = true,
  },
  [sym__node_space] = {
    .visible = false,
    .named = true,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__bare_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__exponent] = {
    .visible = true,
    .named = true,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [sym__sign] = {
    .visible = false,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__escline] = {
    .visible = false,
    .named = true,
  },
  [sym__linespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bare_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escaped_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__octal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_line_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_children_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_node_field_comment] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_children = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_children] = "children",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [8] = {.index = 2, .length = 1},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 3, .length = 1},
  [14] = {.index = 4, .length = 1},
  [15] = {.index = 4, .length = 1},
  [16] = {.index = 5, .length = 1},
  [17] = {.index = 5, .length = 1},
  [18] = {.index = 6, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_children, 1},
  [1] =
    {field_children, 2},
  [2] =
    {field_children, 3},
  [3] =
    {field_children, 4},
  [4] =
    {field_children, 5},
  [5] =
    {field_children, 6},
  [6] =
    {field_children, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_string_fragment,
  },
  [4] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [5] = {
    [0] = alias_sym_node_children_comment,
  },
  [6] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
  },
  [8] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [9] = {
    [0] = alias_sym_node_field_comment,
    [1] = alias_sym_node_field_comment,
    [2] = alias_sym_node_field_comment,
  },
  [10] = {
    [2] = alias_sym_decimal,
  },
  [12] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [13] = {
    [3] = alias_sym_decimal,
  },
  [15] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [17] = {
    [1] = anon_sym_SLASH_DASH,
  },
  [18] = {
    [1] = anon_sym_SLASH_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__node_field, 2,
    sym__node_field,
    alias_sym_node_field_comment,
  sym__integer, 2,
    sym__integer,
    alias_sym_decimal,
  aux_sym_node_repeat1, 3,
    aux_sym_node_repeat1,
    alias_sym_node_field_comment,
    anon_sym_SLASH_DASH,
  aux_sym__escaped_string_repeat1, 2,
    aux_sym__escaped_string_repeat1,
    alias_sym_string_fragment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 18,
  [38] = 23,
  [39] = 39,
  [40] = 24,
  [41] = 19,
  [42] = 21,
  [43] = 20,
  [44] = 44,
  [45] = 11,
  [46] = 28,
  [47] = 29,
  [48] = 26,
  [49] = 12,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 17,
  [84] = 18,
  [85] = 21,
  [86] = 23,
  [87] = 24,
  [88] = 19,
  [89] = 20,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 26,
  [106] = 106,
  [107] = 29,
  [108] = 28,
  [109] = 11,
  [110] = 110,
  [111] = 12,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 17,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 23,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 18,
  [249] = 24,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 19,
  [265] = 265,
  [266] = 266,
  [267] = 20,
  [268] = 268,
  [269] = 269,
  [270] = 23,
  [271] = 21,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 279,
  [281] = 278,
  [282] = 279,
  [283] = 278,
  [284] = 278,
  [285] = 279,
  [286] = 278,
  [287] = 279,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 29,
  [298] = 12,
  [299] = 26,
  [300] = 28,
  [301] = 11,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 304,
  [306] = 304,
  [307] = 307,
  [308] = 307,
  [309] = 304,
  [310] = 307,
  [311] = 304,
  [312] = 307,
  [313] = 307,
  [314] = 314,
  [315] = 17,
  [316] = 316,
  [317] = 190,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 18,
  [322] = 322,
  [323] = 319,
  [324] = 194,
  [325] = 325,
  [326] = 209,
  [327] = 327,
  [328] = 318,
  [329] = 329,
  [330] = 329,
  [331] = 325,
  [332] = 332,
  [333] = 21,
  [334] = 24,
  [335] = 19,
  [336] = 20,
  [337] = 239,
  [338] = 238,
  [339] = 240,
  [340] = 28,
  [341] = 11,
  [342] = 26,
  [343] = 12,
  [344] = 29,
  [345] = 345,
  [346] = 346,
  [347] = 346,
  [348] = 243,
  [349] = 349,
  [350] = 349,
  [351] = 268,
  [352] = 352,
  [353] = 353,
  [354] = 247,
  [355] = 241,
  [356] = 356,
  [357] = 245,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
};

static inline bool sym__normal_bare_identifier_character_set_1(int32_t c) {
  return (c < 10145
    ? (c < 9854
      ? (c < 9742
        ? (c < 9167
          ? (c < 8482
            ? (c < 8252
              ? (c < 174
                ? c == 169
                : c <= 174)
              : (c <= 8252 || c == 8265))
            : (c <= 8482 || (c < 8986
              ? (c < 8617
                ? (c >= 8596 && c <= 8601)
                : c <= 8618)
              : (c <= 8987 || c == 9000))))
          : (c <= 9167 || (c < 9654
            ? (c < 9410
              ? (c < 9208
                ? (c >= 9193 && c <= 9203)
                : c <= 9210)
              : (c <= 9410 || (c >= 9642 && c <= 9643)))
            : (c <= 9654 || (c < 9723
              ? c == 9664
              : (c <= 9726 || (c >= 9728 && c <= 9732)))))))
        : (c <= 9742 || (c < 9784
          ? (c < 9760
            ? (c < 9752
              ? (c < 9748
                ? c == 9745
                : c <= 9749)
              : (c <= 9752 || c == 9757))
            : (c <= 9760 || (c < 9770
              ? (c < 9766
                ? (c >= 9762 && c <= 9763)
                : c <= 9766)
              : (c <= 9770 || (c >= 9774 && c <= 9775)))))
          : (c <= 9786 || (c < 9827
            ? (c < 9800
              ? (c < 9794
                ? c == 9792
                : c <= 9794)
              : (c <= 9811 || (c >= 9823 && c <= 9824)))
            : (c <= 9827 || (c < 9832
              ? (c >= 9829 && c <= 9830)
              : (c <= 9832 || c == 9851))))))))
      : (c <= 9855 || (c < 9989
        ? (c < 9928
          ? (c < 9895
            ? (c < 9883
              ? (c < 9881
                ? (c >= 9874 && c <= 9879)
                : c <= 9881)
              : (c <= 9884 || (c >= 9888 && c <= 9889)))
            : (c <= 9895 || (c < 9917
              ? (c < 9904
                ? (c >= 9898 && c <= 9899)
                : c <= 9905)
              : (c <= 9918 || (c >= 9924 && c <= 9925)))))
          : (c <= 9928 || (c < 9968
            ? (c < 9939
              ? (c < 9937
                ? (c >= 9934 && c <= 9935)
                : c <= 9937)
              : (c <= 9940 || (c >= 9961 && c <= 9962)))
            : (c <= 9973 || (c < 9981
              ? (c >= 9975 && c <= 9978)
              : (c <= 9981 || c == 9986))))))
        : (c <= 9989 || (c < 10035
          ? (c < 10006
            ? (c < 10002
              ? (c < 9999
                ? (c >= 9992 && c <= 9997)
                : c <= 9999)
              : (c <= 10002 || c == 10004))
            : (c <= 10006 || (c < 10017
              ? c == 10013
              : (c <= 10017 || c == 10024))))
          : (c <= 10036 || (c < 10067
            ? (c < 10060
              ? (c < 10055
                ? c == 10052
                : c <= 10055)
              : (c <= 10060 || c == 10062))
            : (c <= 10069 || (c < 10083
              ? c == 10071
              : (c <= 10084 || (c >= 10133 && c <= 10135)))))))))))
    : (c <= 10145 || (c < 128400
      ? (c < 127489
        ? (c < 12951
          ? (c < 11035
            ? (c < 10548
              ? (c < 10175
                ? c == 10160
                : c <= 10175)
              : (c <= 10549 || (c >= 11013 && c <= 11015)))
            : (c <= 11036 || (c < 12336
              ? (c < 11093
                ? c == 11088
                : c <= 11093)
              : (c <= 12336 || c == 12349))))
          : (c <= 12951 || (c < 127358
            ? (c < 127183
              ? (c < 126980
                ? c == 12953
                : c <= 126980)
              : (c <= 127183 || (c >= 127344 && c <= 127345)))
            : (c <= 127359 || (c < 127377
              ? c == 127374
              : (c <= 127386 || (c >= 127462 && c <= 127487)))))))
        : (c <= 127490 || (c < 127987
          ? (c < 127744
            ? (c < 127538
              ? (c < 127535
                ? c == 127514
                : c <= 127535)
              : (c <= 127546 || (c >= 127568 && c <= 127569)))
            : (c <= 127777 || (c < 127897
              ? (c < 127894
                ? (c >= 127780 && c <= 127891)
                : c <= 127895)
              : (c <= 127899 || (c >= 127902 && c <= 127984)))))
          : (c <= 127989 || (c < 128367
            ? (c < 128329
              ? (c < 128255
                ? (c >= 127991 && c <= 128253)
                : c <= 128317)
              : (c <= 128334 || (c >= 128336 && c <= 128359)))
            : (c <= 128368 || (c < 128391
              ? (c >= 128371 && c <= 128378)
              : (c <= 128391 || (c >= 128394 && c <= 128397)))))))))
      : (c <= 128400 || (c < 128745
        ? (c < 128483
          ? (c < 128444
            ? (c < 128424
              ? (c < 128420
                ? (c >= 128405 && c <= 128406)
                : c <= 128421)
              : (c <= 128424 || (c >= 128433 && c <= 128434)))
            : (c <= 128444 || (c < 128476
              ? (c < 128465
                ? (c >= 128450 && c <= 128452)
                : c <= 128467)
              : (c <= 128478 || c == 128481))))
          : (c <= 128483 || (c < 128640
            ? (c < 128499
              ? (c < 128495
                ? c == 128488
                : c <= 128495)
              : (c <= 128499 || (c >= 128506 && c <= 128591)))
            : (c <= 128709 || (c < 128725
              ? (c >= 128715 && c <= 128722)
              : (c <= 128727 || (c >= 128733 && c <= 128741)))))))
        : (c <= 128745 || (c < 129648
          ? (c < 129008
            ? (c < 128755
              ? (c < 128752
                ? (c >= 128747 && c <= 128748)
                : c <= 128752)
              : (c <= 128764 || (c >= 128992 && c <= 129003)))
            : (c <= 129008 || (c < 129340
              ? (c >= 129292 && c <= 129338)
              : (c <= 129349 || (c >= 129351 && c <= 129535)))))
          : (c <= 129652 || (c < 129728
            ? (c < 129680
              ? (c < 129664
                ? (c >= 129656 && c <= 129660)
                : c <= 129670)
              : (c <= 129708 || (c >= 129712 && c <= 129722)))
            : (c <= 129733 || (c < 129760
              ? (c >= 129744 && c <= 129753)
              : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_2(int32_t c) {
  return (c < 6016
    ? (c < 2962
      ? (c < 2451
        ? (c < 1376
          ? (c < 748
            ? (c < 181
              ? (c < '^'
                ? (c < ':'
                  ? (c >= '!' && c <= '*')
                  : (c <= ':' || (c >= '?' && c <= 'Z')))
                : (c <= '^' || (c < 170
                  ? (c >= 'g' && c <= '~')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 768
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1155
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1869
            ? (c < 1552
              ? (c < 1476
                ? (c < 1471
                  ? (c >= 1425 && c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))
                : (c <= 1477 || (c < 1488
                  ? c == 1479
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1562 || (c < 1759
                ? (c < 1646
                  ? (c >= 1568 && c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c >= 1770 && c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1866)))))))
            : (c <= 1969 || (c < 2185
              ? (c < 2048
                ? (c < 2042
                  ? (c >= 1984 && c <= 2037)
                  : (c <= 2042 || c == 2045))
                : (c <= 2093 || (c < 2144
                  ? (c >= 2112 && c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2417
                ? (c < 2275
                  ? (c >= 2200 && c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))
                : (c <= 2435 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))))))
        : (c <= 2472 || (c < 2693
          ? (c < 2575
            ? (c < 2524
              ? (c < 2492
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2500 || (c < 2507
                  ? (c >= 2503 && c <= 2504)
                  : (c <= 2510 || c == 2519))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2561
                  ? c == 2558
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))
            : (c <= 2576 || (c < 2631
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2620
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2654
                ? (c < 2641
                  ? (c >= 2635 && c <= 2637)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2689
                  ? (c >= 2662 && c <= 2677)
                  : c <= 2691)))))))
          : (c <= 2701 || (c < 2835
            ? (c < 2763
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2748
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))))
              : (c <= 2765 || (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2787 || (c >= 2790 && c <= 2799)))
                : (c <= 2815 || (c < 2821
                  ? (c >= 2817 && c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))))
            : (c <= 2856 || (c < 2908
              ? (c < 2876
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2891
                  ? (c >= 2887 && c <= 2888)
                  : (c <= 2893 || (c >= 2901 && c <= 2903)))))
              : (c <= 2909 || (c < 2946
                ? (c < 2918
                  ? (c >= 2911 && c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3664
        ? (c < 3253
          ? (c < 3114
            ? (c < 3014
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || (c >= 3006 && c <= 3010)))))
              : (c <= 3016 || (c < 3046
                ? (c < 3024
                  ? (c >= 3018 && c <= 3021)
                  : (c <= 3024 || c == 3031))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3072 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))))
            : (c <= 3129 || (c < 3174
              ? (c < 3157
                ? (c < 3142
                  ? (c >= 3132 && c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3203 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))))
          : (c <= 3257 || (c < 3450
            ? (c < 3313
              ? (c < 3285
                ? (c < 3270
                  ? (c >= 3260 && c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))
                : (c <= 3286 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3398
                ? (c < 3342
                  ? (c >= 3328 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c >= 3402 && c <= 3406)
                  : (c <= 3427 || (c >= 3430 && c <= 3448)))))))
            : (c <= 3455 || (c < 3535
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3457 && c <= 3459)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || c == 3530))))
              : (c <= 3540 || (c < 3570
                ? (c < 3544
                  ? c == 3542
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3648
                  ? (c >= 3585 && c <= 3642)
                  : c <= 3662)))))))))
        : (c <= 3673 || (c < 4682
          ? (c < 3895
            ? (c < 3782
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3840
                ? (c < 3792
                  ? (c >= 3784 && c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3872
                  ? (c >= 3864 && c <= 3865)
                  : (c <= 3891 || c == 3893))))))
            : (c <= 3895 || (c < 4096
              ? (c < 3953
                ? (c < 3902
                  ? c == 3897
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3972 || (c < 3993
                  ? (c >= 3974 && c <= 3991)
                  : (c <= 4028 || c == 4038))))
              : (c <= 4169 || (c < 4301
                ? (c < 4256
                  ? (c >= 4176 && c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))))
          : (c <= 4685 || (c < 4957
            ? (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))
            : (c <= 4959 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6002
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6003)))))))))))))
    : (c <= 6099 || (c < 42775
      ? (c < 8455
        ? (c < 7245
          ? (c < 6576
            ? (c < 6272
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6159
                  ? (c >= 6155 && c <= 6157)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))))
              : (c <= 6314 || (c < 6448
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))
                : (c <= 6459 || (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))))
            : (c <= 6601 || (c < 6832
              ? (c < 6752
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6683 || (c >= 6688 && c <= 6750)))
                : (c <= 6780 || (c < 6800
                  ? (c >= 6783 && c <= 6793)
                  : (c <= 6809 || c == 6823))))
              : (c <= 6862 || (c < 7040
                ? (c < 6992
                  ? (c >= 6912 && c <= 6988)
                  : (c <= 7001 || (c >= 7019 && c <= 7027)))
                : (c <= 7155 || (c < 7232
                  ? (c >= 7168 && c <= 7223)
                  : c <= 7241)))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
          : (c <= 11734 || (c < 12784
            ? (c < 12441
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12344
                  ? (c >= 12321 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12693 || (c >= 12704 && c <= 12735)))))))
            : (c <= 12799 || (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 42124 || (c < 42560
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42539)))
                : (c <= 42610 || (c < 42623
                  ? (c >= 42612 && c <= 42621)
                  : c <= 42737)))))))))))
      : (c <= 42783 || (c < 65313
        ? (c < 43808
          ? (c < 43360
            ? (c < 43056
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43047 || c == 43052))))
              : (c <= 43061 || (c < 43232
                ? (c < 43136
                  ? (c >= 43072 && c <= 43123)
                  : (c <= 43205 || (c >= 43216 && c <= 43225)))
                : (c <= 43255 || (c < 43261
                  ? c == 43259
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))))
            : (c <= 43388 || (c < 43642
              ? (c < 43520
                ? (c < 43471
                  ? (c >= 43392 && c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43600
                  ? (c >= 43584 && c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43759 || (c >= 43762 && c <= 43766)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64298
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44010 || (c < 44016
                  ? (c >= 44012 && c <= 44013)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))
            : (c <= 64310 || (c < 64914
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))
              : (c <= 64967 || (c < 65136
                ? (c < 65024
                  ? (c >= 65008 && c <= 65019)
                  : (c <= 65039 || (c >= 65056 && c <= 65071)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65930
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 65843 || (c >= 65856 && c <= 65912)))))))
            : (c <= 65931 || (c < 66432
              ? (c < 66272
                ? (c < 66176
                  ? c == 66045
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_3(int32_t c) {
  return (c < 8488
    ? (c < 3274
      ? (c < 2575
        ? (c < 1519
          ? (c < 768
            ? (c < 181
              ? (c < 'a'
                ? (c < '.'
                  ? (c < '*'
                    ? (c >= '!' && c <= '\'')
                    : c <= '*')
                  : (c <= ':' || (c < '^'
                    ? (c >= '?' && c <= 'Z')
                    : c <= '_')))
                : (c <= '|' || (c < 174
                  ? (c < 169
                    ? c == '~'
                    : c <= 170)
                  : (c <= 174 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? (c < 188
                    ? (c >= 185 && c <= 186)
                    : c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))))))
            : (c <= 884 || (c < 1155
              ? (c < 904
                ? (c < 895
                  ? (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))))
              : (c <= 1327 || (c < 1471
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1479
                  ? (c < 1476
                    ? (c >= 1473 && c <= 1474)
                    : c <= 1477)
                  : (c <= 1479 || (c >= 1488 && c <= 1514)))))))))
          : (c <= 1522 || (c < 2406
            ? (c < 1984
              ? (c < 1759
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c >= 1749 && c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))
              : (c <= 2037 || (c < 2144
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))
                : (c <= 2154 || (c < 2200
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2273 || (c >= 2275 && c <= 2403)))))))
            : (c <= 2415 || (c < 2507
              ? (c < 2474
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2492
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2548
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2561
                  ? (c < 2558
                    ? c == 2556
                    : c <= 2558)
                  : (c <= 2563 || (c >= 2565 && c <= 2570)))))))))))
        : (c <= 2576 || (c < 2911
          ? (c < 2741
            ? (c < 2641
              ? (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))))
              : (c <= 2641 || (c < 2693
                ? (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))
            : (c <= 2745 || (c < 2831
              ? (c < 2784
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2817
                  ? (c < 2809
                    ? (c >= 2790 && c <= 2799)
                    : c <= 2815)
                  : (c <= 2819 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2876
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2884 || (c < 2901
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)
                  : (c <= 2903 || (c >= 2908 && c <= 2909)))))))))
          : (c <= 2915 || (c < 3086
            ? (c < 2979
              ? (c < 2958
                ? (c < 2946
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))
              : (c <= 2980 || (c < 3018
                ? (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c >= 3014 && c <= 3016)))
                : (c <= 3021 || (c < 3046
                  ? (c < 3031
                    ? c == 3024
                    : c <= 3031)
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3174
              ? (c < 3146
                ? (c < 3132
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3140 || (c >= 3142 && c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3192 && c <= 3198)
                    : c <= 3203)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c >= 3270 && c <= 3272)))))))))))))
      : (c <= 3277 || (c < 5743
        ? (c < 3840
          ? (c < 3530
            ? (c < 3402
              ? (c < 3313
                ? (c < 3296
                  ? (c < 3293
                    ? (c >= 3285 && c <= 3286)
                    : c <= 3294)
                  : (c <= 3299 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3396 || (c >= 3398 && c <= 3400)))))
              : (c <= 3406 || (c < 3461
                ? (c < 3450
                  ? (c < 3430
                    ? (c >= 3412 && c <= 3427)
                    : c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3530 || (c < 3716
              ? (c < 3570
                ? (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c >= 3558 && c <= 3567)))
                : (c <= 3571 || (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))))
              : (c <= 3716 || (c < 3776
                ? (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3773)))
                : (c <= 3780 || (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))))))
          : (c <= 3840 || (c < 4688
            ? (c < 3993
              ? (c < 3897
                ? (c < 3893
                  ? (c < 3872
                    ? (c >= 3864 && c <= 3865)
                    : c <= 3891)
                  : (c <= 3893 || c == 3895))
                : (c <= 3897 || (c < 3953
                  ? (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4295
                ? (c < 4176
                  ? (c < 4096
                    ? c == 4038
                    : c <= 4169)
                  : (c <= 4253 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))))
            : (c <= 4694 || (c < 4808
              ? (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4957 && c <= 4959)))
                : (c <= 4988 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))))))))
        : (c <= 5786 || (c < 7245
          ? (c < 6432
            ? (c < 6103
              ? (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 6002
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6003 || (c >= 6016 && c <= 6099)))))
              : (c <= 6103 || (c < 6159
                ? (c < 6128
                  ? (c < 6112
                    ? (c >= 6108 && c <= 6109)
                    : c <= 6121)
                  : (c <= 6137 || (c >= 6155 && c <= 6157)))
                : (c <= 6169 || (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))
            : (c <= 6443 || (c < 6783
              ? (c < 6576
                ? (c < 6512
                  ? (c < 6470
                    ? (c >= 6448 && c <= 6459)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)
                  : (c <= 6750 || (c >= 6752 && c <= 6780)))))
              : (c <= 6793 || (c < 6992
                ? (c < 6832
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6862 || (c >= 6912 && c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8144
            ? (c < 8016
              ? (c < 7380
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7376 && c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))
            : (c <= 8147 || (c < 8336
              ? (c < 8252
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8252 || (c < 8308
                  ? (c < 8304
                    ? c == 8265
                    : c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))))
              : (c <= 8348 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8400 && c <= 8432)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c < 8482
                    ? (c >= 8473 && c <= 8477)
                    : c <= 8482)
                  : (c <= 8484 || c == 8486))))))))))))))
    : (c <= 8488 || (c < 43744
      ? (c < 10175
        ? (c < 9854
          ? (c < 9728
            ? (c < 9167
              ? (c < 8528
                ? (c < 8508
                  ? (c < 8495
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8505)
                  : (c <= 8511 || (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)))
                : (c <= 8585 || (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))))
              : (c <= 9167 || (c < 9450
                ? (c < 9312
                  ? (c < 9208
                    ? (c >= 9193 && c <= 9203)
                    : c <= 9210)
                  : (c <= 9371 || c == 9410))
                : (c <= 9471 || (c < 9664
                  ? (c < 9654
                    ? (c >= 9642 && c <= 9643)
                    : c <= 9654)
                  : (c <= 9664 || (c >= 9723 && c <= 9726)))))))
            : (c <= 9732 || (c < 9774
              ? (c < 9757
                ? (c < 9748
                  ? (c < 9745
                    ? c == 9742
                    : c <= 9745)
                  : (c <= 9749 || c == 9752))
                : (c <= 9757 || (c < 9766
                  ? (c < 9762
                    ? c == 9760
                    : c <= 9763)
                  : (c <= 9766 || c == 9770))))
              : (c <= 9775 || (c < 9823
                ? (c < 9794
                  ? (c < 9792
                    ? (c >= 9784 && c <= 9786)
                    : c <= 9792)
                  : (c <= 9794 || (c >= 9800 && c <= 9811)))
                : (c <= 9824 || (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || c == 9851))))))))
          : (c <= 9855 || (c < 9992
            ? (c < 9928
              ? (c < 9895
                ? (c < 9883
                  ? (c < 9881
                    ? (c >= 9874 && c <= 9879)
                    : c <= 9881)
                  : (c <= 9884 || (c >= 9888 && c <= 9889)))
                : (c <= 9895 || (c < 9917
                  ? (c < 9904
                    ? (c >= 9898 && c <= 9899)
                    : c <= 9905)
                  : (c <= 9918 || (c >= 9924 && c <= 9925)))))
              : (c <= 9928 || (c < 9968
                ? (c < 9939
                  ? (c < 9937
                    ? (c >= 9934 && c <= 9935)
                    : c <= 9937)
                  : (c <= 9940 || (c >= 9961 && c <= 9962)))
                : (c <= 9973 || (c < 9986
                  ? (c < 9981
                    ? (c >= 9975 && c <= 9978)
                    : c <= 9981)
                  : (c <= 9986 || c == 9989))))))
            : (c <= 9997 || (c < 10055
              ? (c < 10013
                ? (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || c == 10006))
                : (c <= 10013 || (c < 10035
                  ? (c < 10024
                    ? c == 10017
                    : c <= 10024)
                  : (c <= 10036 || c == 10052))))
              : (c <= 10055 || (c < 10083
                ? (c < 10067
                  ? (c < 10062
                    ? c == 10060
                    : c <= 10062)
                  : (c <= 10069 || c == 10071))
                : (c <= 10084 || (c < 10145
                  ? (c < 10133
                    ? (c >= 10102 && c <= 10131)
                    : c <= 10135)
                  : (c <= 10145 || c == 10160))))))))))
        : (c <= 10175 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11035
                  ? (c < 11013
                    ? (c >= 10548 && c <= 10549)
                    : c <= 11015)
                  : (c <= 11036 || c == 11088))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42994
            ? (c < 42512
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 42192
                  ? (c < 19968
                    ? c == 19903
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42539 || (c < 42786
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42610)
                    : c <= 42621)
                  : (c <= 42737 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43047 || (c < 43360
              ? (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? c == 43052
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43584
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))
                : (c <= 43597 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43759 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_4(int32_t c) {
  return (c < 8490
    ? (c < 3285
      ? (c < 2579
        ? (c < 1552
          ? (c < 886
            ? (c < 185
              ? (c < 'a'
                ? (c < '?'
                  ? (c < '.'
                    ? (c >= '!' && c <= '*')
                    : c <= ':')
                  : (c <= 'Z' || (c >= '^' && c <= '_')))
                : (c <= '~' || (c < 178
                  ? (c < 174
                    ? (c >= 169 && c <= 170)
                    : c <= 174)
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c < 192
                    ? (c >= 188 && c <= 190)
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 768 && c <= 884)))))))
            : (c <= 887 || (c < 1329
              ? (c < 908
                ? (c < 902
                  ? (c < 895
                    ? (c >= 890 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))
              : (c <= 1366 || (c < 1473
                ? (c < 1425
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1469 || c == 1471))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))))))
          : (c <= 1562 || (c < 2417
            ? (c < 2042
              ? (c < 1770
                ? (c < 1749
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1641)
                    : c <= 1747)
                  : (c <= 1756 || (c >= 1759 && c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))))
              : (c <= 2042 || (c < 2160
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))))
            : (c <= 2435 || (c < 2519
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c >= 2507 && c <= 2510)))))
              : (c <= 2519 || (c < 2556
                ? (c < 2534
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2531)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))))))))
        : (c <= 2600 || (c < 2918
          ? (c < 2748
            ? (c < 2649
              ? (c < 2620
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2620 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2637 || c == 2641))))
              : (c <= 2652 || (c < 2703
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))))
            : (c <= 2757 || (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2887
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || (c >= 2876 && c <= 2884)))
                : (c <= 2888 || (c < 2908
                  ? (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))))))))
          : (c <= 2927 || (c < 3090
            ? (c < 2984
              ? (c < 2962
                ? (c < 2949
                  ? (c < 2946
                    ? (c >= 2929 && c <= 2935)
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3024
                ? (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))))
            : (c <= 3112 || (c < 3192
              ? (c < 3157
                ? (c < 3142
                  ? (c < 3132
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)
                  : (c <= 3144 || (c >= 3146 && c <= 3149)))
                : (c <= 3158 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3171 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3242
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c >= 3274 && c <= 3277)))))))))))))
      : (c <= 3286 || (c < 5792
        ? (c < 3864
          ? (c < 3535
            ? (c < 3412
              ? (c < 3328
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3398
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))
              : (c <= 3427 || (c < 3482
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3448)
                    : c <= 3455)
                  : (c <= 3459 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || c == 3530))))))
            : (c <= 3540 || (c < 3718
              ? (c < 3585
                ? (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c >= 3570 && c <= 3571)))
                : (c <= 3642 || (c < 3713
                  ? (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)
                  : (c <= 3714 || c == 3716))))
              : (c <= 3722 || (c < 3782
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || c == 3840))))))))
          : (c <= 3865 || (c < 4696
            ? (c < 4038
              ? (c < 3902
                ? (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3891)
                    : c <= 3893)
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c >= 3993 && c <= 4028)))))
              : (c <= 4038 || (c < 4301
                ? (c < 4256
                  ? (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))))
            : (c <= 4696 || (c < 4824
              ? (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4957
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 4959 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))))))))
        : (c <= 5866 || (c < 7296
          ? (c < 6448
            ? (c < 6108
              ? (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)
                  : (c <= 5940 || (c >= 5952 && c <= 5971)))
                : (c <= 5996 || (c < 6016
                  ? (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)
                  : (c <= 6099 || c == 6103))))
              : (c <= 6109 || (c < 6176
                ? (c < 6155
                  ? (c < 6128
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))
                : (c <= 6264 || (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))))))
            : (c <= 6459 || (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6752
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)
                  : (c <= 6780 || (c >= 6783 && c <= 6793)))))
              : (c <= 6809 || (c < 7019
                ? (c < 6912
                  ? (c < 6832
                    ? c == 6823
                    : c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7232
                  ? (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))))))))
          : (c <= 7304 || (c < 8150
            ? (c < 8025
              ? (c < 7424
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c >= 7380 && c <= 7418)))
                : (c <= 7957 || (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))))
              : (c <= 8025 || (c < 8118
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))))))
            : (c <= 8155 || (c < 8400
              ? (c < 8265
                ? (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8252))
                : (c <= 8265 || (c < 8319
                  ? (c < 8308
                    ? (c >= 8304 && c <= 8305)
                    : c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))))
              : (c <= 8432 || (c < 8473
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? (c < 8484
                    ? c == 8482
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))))))))))
    : (c <= 8493 || (c < 43744
      ? (c < 10175
        ? (c < 9854
          ? (c < 9728
            ? (c < 9167
              ? (c < 8528
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 8986
                  ? (c < 8617
                    ? (c >= 8596 && c <= 8601)
                    : c <= 8618)
                  : (c <= 8987 || c == 9000))))
              : (c <= 9167 || (c < 9450
                ? (c < 9312
                  ? (c < 9208
                    ? (c >= 9193 && c <= 9203)
                    : c <= 9210)
                  : (c <= 9371 || c == 9410))
                : (c <= 9471 || (c < 9664
                  ? (c < 9654
                    ? (c >= 9642 && c <= 9643)
                    : c <= 9654)
                  : (c <= 9664 || (c >= 9723 && c <= 9726)))))))
            : (c <= 9732 || (c < 9774
              ? (c < 9757
                ? (c < 9748
                  ? (c < 9745
                    ? c == 9742
                    : c <= 9745)
                  : (c <= 9749 || c == 9752))
                : (c <= 9757 || (c < 9766
                  ? (c < 9762
                    ? c == 9760
                    : c <= 9763)
                  : (c <= 9766 || c == 9770))))
              : (c <= 9775 || (c < 9823
                ? (c < 9794
                  ? (c < 9792
                    ? (c >= 9784 && c <= 9786)
                    : c <= 9792)
                  : (c <= 9794 || (c >= 9800 && c <= 9811)))
                : (c <= 9824 || (c < 9832
                  ? (c < 9829
                    ? c == 9827
                    : c <= 9830)
                  : (c <= 9832 || c == 9851))))))))
          : (c <= 9855 || (c < 9992
            ? (c < 9928
              ? (c < 9895
                ? (c < 9883
                  ? (c < 9881
                    ? (c >= 9874 && c <= 9879)
                    : c <= 9881)
                  : (c <= 9884 || (c >= 9888 && c <= 9889)))
                : (c <= 9895 || (c < 9917
                  ? (c < 9904
                    ? (c >= 9898 && c <= 9899)
                    : c <= 9905)
                  : (c <= 9918 || (c >= 9924 && c <= 9925)))))
              : (c <= 9928 || (c < 9968
                ? (c < 9939
                  ? (c < 9937
                    ? (c >= 9934 && c <= 9935)
                    : c <= 9937)
                  : (c <= 9940 || (c >= 9961 && c <= 9962)))
                : (c <= 9973 || (c < 9986
                  ? (c < 9981
                    ? (c >= 9975 && c <= 9978)
                    : c <= 9981)
                  : (c <= 9986 || c == 9989))))))
            : (c <= 9997 || (c < 10055
              ? (c < 10013
                ? (c < 10004
                  ? (c < 10002
                    ? c == 9999
                    : c <= 10002)
                  : (c <= 10004 || c == 10006))
                : (c <= 10013 || (c < 10035
                  ? (c < 10024
                    ? c == 10017
                    : c <= 10024)
                  : (c <= 10036 || c == 10052))))
              : (c <= 10055 || (c < 10083
                ? (c < 10067
                  ? (c < 10062
                    ? c == 10060
                    : c <= 10062)
                  : (c <= 10069 || c == 10071))
                : (c <= 10084 || (c < 10145
                  ? (c < 10133
                    ? (c >= 10102 && c <= 10131)
                    : c <= 10135)
                  : (c <= 10145 || c == 10160))))))))))
        : (c <= 10175 || (c < 12881
          ? (c < 11720
            ? (c < 11559
              ? (c < 11093
                ? (c < 11035
                  ? (c < 11013
                    ? (c >= 10548 && c <= 10549)
                    : c <= 11015)
                  : (c <= 11036 || c == 11088))
                : (c <= 11093 || (c < 11517
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))))
              : (c <= 11559 || (c < 11680
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11647 && c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))))))
            : (c <= 11726 || (c < 12445
              ? (c < 12293
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12353
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12341)
                    : c <= 12349)
                  : (c <= 12438 || (c >= 12441 && c <= 12442)))))
              : (c <= 12447 || (c < 12690
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12693 || (c < 12832
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))))))))
          : (c <= 12895 || (c < 42994
            ? (c < 42512
              ? (c < 13312
                ? (c < 12953
                  ? (c < 12951
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12951)
                  : (c <= 12953 || (c >= 12977 && c <= 12991)))
                : (c <= 13312 || (c < 42192
                  ? (c < 19968
                    ? c == 19903
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42539 || (c < 42786
                ? (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42610)
                    : c <= 42621)
                  : (c <= 42737 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43047 || (c < 43360
              ? (c < 43216
                ? (c < 43072
                  ? (c < 43056
                    ? c == 43052
                    : c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43261
                  ? (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43309 || (c >= 43312 && c <= 43347)))))
              : (c <= 43388 || (c < 43584
                ? (c < 43488
                  ? (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)
                  : (c <= 43518 || (c >= 43520 && c <= 43574)))
                : (c <= 43597 || (c < 43642
                  ? (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))))))))
      : (c <= 43759 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_5(int32_t c) {
  return (c < 8484
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? c == '.'
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43739
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
                : (c <= 11088 || (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))))
            : (c <= 11718 || (c < 12441
              ? (c < 11823
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12344
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))))))))
          : (c <= 12879 || (c < 42965
            ? (c < 42240
              ? (c < 12977
                ? (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))
                : (c <= 12991 || (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_6(int32_t c) {
  return (c < 8484
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? (c >= '-' && c <= '.')
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'b'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43739
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
                : (c <= 11088 || (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))))
            : (c <= 11718 || (c < 12441
              ? (c < 11823
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12344
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))))))))
          : (c <= 12879 || (c < 42965
            ? (c < 42240
              ? (c < 12977
                ? (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))
                : (c <= 12991 || (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__normal_bare_identifier_character_set_7(int32_t c) {
  return (c < 8484
    ? (c < 3260
      ? (c < 2558
        ? (c < 1476
          ? (c < 736
            ? (c < 169
              ? (c < '?'
                ? (c < '*'
                  ? (c < '#'
                    ? c == '!'
                    : c <= '\'')
                  : (c <= '+' || (c < '0'
                    ? (c >= '-' && c <= '.')
                    : c <= ':')))
                : (c <= 'Z' || (c < '|'
                  ? (c < 'a'
                    ? (c >= '^' && c <= '_')
                    : c <= 'z')
                  : (c <= '|' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c < 178
                    ? c == 174
                    : c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))))
            : (c <= 740 || (c < 910
              ? (c < 890
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1369
                ? (c < 1155
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1471
                  ? (c < 1425
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1469)
                  : (c <= 1471 || (c >= 1473 && c <= 1474)))))))))
          : (c <= 1477 || (c < 2185
            ? (c < 1791
              ? (c < 1568
                ? (c < 1519
                  ? (c < 1488
                    ? c == 1479
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1552 && c <= 1562)))
                : (c <= 1641 || (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))
              : (c <= 1791 || (c < 2045
                ? (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1866)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))
                : (c <= 2045 || (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))))
            : (c <= 2190 || (c < 2486
              ? (c < 2437
                ? (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c >= 2417 && c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))
                : (c <= 2525 || (c < 2548
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2553 || c == 2556))))))))))
        : (c <= 2558 || (c < 2901
          ? (c < 2730
            ? (c < 2631
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c >= 2622 && c <= 2626)))))
              : (c <= 2632 || (c < 2662
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || c == 2654))
                : (c <= 2677 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2689 && c <= 2691)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))
            : (c <= 2736 || (c < 2817
              ? (c < 2763
                ? (c < 2748
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c >= 2759 && c <= 2761)))
                : (c <= 2765 || (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c >= 2809 && c <= 2815)))))
              : (c <= 2819 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c >= 2891 && c <= 2893)))))))))
          : (c <= 2903 || (c < 3046
            ? (c < 2972
              ? (c < 2946
                ? (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3006
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || c == 3031))))))
            : (c <= 3058 || (c < 3165
              ? (c < 3132
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3072 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3205
                ? (c < 3192
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3198 || (c >= 3200 && c <= 3203)))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))))))
      : (c <= 3268 || (c < 5121
        ? (c < 3804
          ? (c < 3520
            ? (c < 3398
              ? (c < 3302
                ? (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))
                : (c <= 3311 || (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3396)))))
              : (c <= 3400 || (c < 3457
                ? (c < 3430
                  ? (c < 3412
                    ? (c >= 3402 && c <= 3406)
                    : c <= 3427)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3459 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3713
              ? (c < 3558
                ? (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c >= 3544 && c <= 3551)))
                : (c <= 3567 || (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c >= 3664 && c <= 3673)))))
              : (c <= 3714 || (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3773 || (c < 3784
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3789 || (c >= 3792 && c <= 3801)))))))))
          : (c <= 3807 || (c < 4682
            ? (c < 3974
              ? (c < 3895
                ? (c < 3872
                  ? (c < 3864
                    ? c == 3840
                    : c <= 3865)
                  : (c <= 3891 || c == 3893))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3953 && c <= 3972)))))
              : (c <= 3991 || (c < 4256
                ? (c < 4096
                  ? (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))
            : (c <= 4685 || (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4957
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4988)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))))))))
        : (c <= 5740 || (c < 7168
          ? (c < 6320
            ? (c < 6002
              ? (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5909 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))
              : (c <= 6003 || (c < 6128
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)
                  : (c <= 6109 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))
            : (c <= 6389 || (c < 6688
              ? (c < 6512
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6608
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))))
              : (c <= 6750 || (c < 6832
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c >= 7040 && c <= 7155)))))))))
          : (c <= 7223 || (c < 8130
            ? (c < 7968
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7424
                  ? (c < 7380
                    ? (c >= 7376 && c <= 7378)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))
            : (c <= 8132 || (c < 8308
              ? (c < 8178
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8265
                  ? (c < 8252
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8252)
                  : (c <= 8265 || (c >= 8304 && c <= 8305)))))
              : (c <= 8313 || (c < 8455
                ? (c < 8400
                  ? (c < 8336
                    ? (c >= 8319 && c <= 8329)
                    : c <= 8348)
                  : (c <= 8432 || c == 8450))
                : (c <= 8455 || (c < 8473
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8482))))))))))))))
    : (c <= 8484 || (c < 43739
      ? (c < 10145
        ? (c < 9832
          ? (c < 9664
            ? (c < 8986
              ? (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 8596
                  ? (c < 8528
                    ? c == 8526
                    : c <= 8585)
                  : (c <= 8601 || (c >= 8617 && c <= 8618)))))
              : (c <= 8987 || (c < 9312
                ? (c < 9193
                  ? (c < 9167
                    ? c == 9000
                    : c <= 9167)
                  : (c <= 9203 || (c >= 9208 && c <= 9210)))
                : (c <= 9371 || (c < 9642
                  ? (c < 9450
                    ? c == 9410
                    : c <= 9471)
                  : (c <= 9643 || c == 9654))))))
            : (c <= 9664 || (c < 9766
              ? (c < 9748
                ? (c < 9742
                  ? (c < 9728
                    ? (c >= 9723 && c <= 9726)
                    : c <= 9732)
                  : (c <= 9742 || c == 9745))
                : (c <= 9749 || (c < 9760
                  ? (c < 9757
                    ? c == 9752
                    : c <= 9757)
                  : (c <= 9760 || (c >= 9762 && c <= 9763)))))
              : (c <= 9766 || (c < 9794
                ? (c < 9784
                  ? (c < 9774
                    ? c == 9770
                    : c <= 9775)
                  : (c <= 9786 || c == 9792))
                : (c <= 9794 || (c < 9827
                  ? (c < 9823
                    ? (c >= 9800 && c <= 9811)
                    : c <= 9824)
                  : (c <= 9827 || (c >= 9829 && c <= 9830)))))))))
          : (c <= 9832 || (c < 9986
            ? (c < 9917
              ? (c < 9883
                ? (c < 9874
                  ? (c < 9854
                    ? c == 9851
                    : c <= 9855)
                  : (c <= 9879 || c == 9881))
                : (c <= 9884 || (c < 9898
                  ? (c < 9895
                    ? (c >= 9888 && c <= 9889)
                    : c <= 9895)
                  : (c <= 9899 || (c >= 9904 && c <= 9905)))))
              : (c <= 9918 || (c < 9939
                ? (c < 9934
                  ? (c < 9928
                    ? (c >= 9924 && c <= 9925)
                    : c <= 9928)
                  : (c <= 9935 || c == 9937))
                : (c <= 9940 || (c < 9975
                  ? (c < 9968
                    ? (c >= 9961 && c <= 9962)
                    : c <= 9973)
                  : (c <= 9978 || c == 9981))))))
            : (c <= 9986 || (c < 10035
              ? (c < 10004
                ? (c < 9999
                  ? (c < 9992
                    ? c == 9989
                    : c <= 9997)
                  : (c <= 9999 || c == 10002))
                : (c <= 10004 || (c < 10017
                  ? (c < 10013
                    ? c == 10006
                    : c <= 10013)
                  : (c <= 10017 || c == 10024))))
              : (c <= 10036 || (c < 10067
                ? (c < 10060
                  ? (c < 10055
                    ? c == 10052
                    : c <= 10055)
                  : (c <= 10060 || c == 10062))
                : (c <= 10069 || (c < 10102
                  ? (c < 10083
                    ? c == 10071
                    : c <= 10084)
                  : (c <= 10131 || (c >= 10133 && c <= 10135)))))))))))
        : (c <= 10145 || (c < 12872
          ? (c < 11712
            ? (c < 11520
              ? (c < 11088
                ? (c < 10548
                  ? (c < 10175
                    ? c == 10160
                    : c <= 10175)
                  : (c <= 10549 || (c < 11035
                    ? (c >= 11013 && c <= 11015)
                    : c <= 11036)))
                : (c <= 11088 || (c < 11499
                  ? (c < 11264
                    ? c == 11093
                    : c <= 11492)
                  : (c <= 11507 || c == 11517))))
              : (c <= 11557 || (c < 11647
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))))))
            : (c <= 11718 || (c < 12441
              ? (c < 11823
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 11744 && c <= 11775)))
                : (c <= 11823 || (c < 12344
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12341)
                  : (c <= 12349 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12690 && c <= 12693)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))))))))
          : (c <= 12879 || (c < 42965
            ? (c < 42240
              ? (c < 12977
                ? (c < 12951
                  ? (c < 12928
                    ? (c >= 12881 && c <= 12895)
                    : c <= 12937)
                  : (c <= 12951 || c == 12953))
                : (c <= 12991 || (c < 19968
                  ? (c < 19903
                    ? c == 13312
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42775
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42610)
                  : (c <= 42621 || (c >= 42623 && c <= 42737)))
                : (c <= 42783 || (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))))))
            : (c <= 42969 || (c < 43312
              ? (c < 43136
                ? (c < 43056
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43061 || (c >= 43072 && c <= 43123)))
                : (c <= 43205 || (c < 43259
                  ? (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))
              : (c <= 43347 || (c < 43520
                ? (c < 43471
                  ? (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)
                  : (c <= 43481 || (c >= 43488 && c <= 43518)))
                : (c <= 43574 || (c < 43616
                  ? (c < 43600
                    ? (c >= 43584 && c <= 43597)
                    : c <= 43609)
                  : (c <= 43638 || (c >= 43642 && c <= 43714)))))))))))))
      : (c <= 43741 || (c < 67424
        ? (c < 65482
          ? (c < 64285
            ? (c < 44012
              ? (c < 43808
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)))
                : (c <= 43814 || (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44010)))))
              : (c <= 44013 || (c < 55243
                ? (c < 55203
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 44032)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 65008
              ? (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64848
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))
              : (c <= 65019 || (c < 65296
                ? (c < 65136
                  ? (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)
                  : (c <= 65140 || (c >= 65142 && c <= 65276)))
                : (c <= 65305 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))))))
          : (c <= 65487 || (c < 66432
            ? (c < 65799
              ? (c < 65576
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))))
              : (c <= 65843 || (c < 66208
                ? (c < 66045
                  ? (c < 65930
                    ? (c >= 65856 && c <= 65912)
                    : c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66272 && c <= 66299)
                    : c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66426)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 128371
          ? (c < 127358
            ? (c < 67672
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67835
                ? (c < 67808
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67742)
                    : c <= 67759)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))
                : (c <= 67867 || (c < 127183
                  ? (c < 126980
                    ? (c >= 67872 && c <= 67883)
                    : c <= 126980)
                  : (c <= 127183 || (c >= 127344 && c <= 127345)))))))
            : (c <= 127359 || (c < 127780
              ? (c < 127514
                ? (c < 127462
                  ? (c < 127377
                    ? c == 127374
                    : c <= 127386)
                  : (c <= 127487 || (c >= 127489 && c <= 127490)))
                : (c <= 127514 || (c < 127568
                  ? (c < 127538
                    ? c == 127535
                    : c <= 127546)
                  : (c <= 127569 || (c >= 127744 && c <= 127777)))))
              : (c <= 127891 || (c < 127991
                ? (c < 127902
                  ? (c < 127897
                    ? (c >= 127894 && c <= 127895)
                    : c <= 127899)
                  : (c <= 127984 || (c >= 127987 && c <= 127989)))
                : (c <= 128253 || (c < 128336
                  ? (c < 128329
                    ? (c >= 128255 && c <= 128317)
                    : c <= 128334)
                  : (c <= 128359 || (c >= 128367 && c <= 128368)))))))))
          : (c <= 128378 || (c < 128725
            ? (c < 128465
              ? (c < 128420
                ? (c < 128400
                  ? (c < 128394
                    ? c == 128391
                    : c <= 128397)
                  : (c <= 128400 || (c >= 128405 && c <= 128406)))
                : (c <= 128421 || (c < 128444
                  ? (c < 128433
                    ? c == 128424
                    : c <= 128434)
                  : (c <= 128444 || (c >= 128450 && c <= 128452)))))
              : (c <= 128467 || (c < 128495
                ? (c < 128483
                  ? (c < 128481
                    ? (c >= 128476 && c <= 128478)
                    : c <= 128481)
                  : (c <= 128483 || c == 128488))
                : (c <= 128495 || (c < 128640
                  ? (c < 128506
                    ? c == 128499
                    : c <= 128591)
                  : (c <= 128709 || (c >= 128715 && c <= 128722)))))))
            : (c <= 128727 || (c < 129351
              ? (c < 128755
                ? (c < 128747
                  ? (c < 128745
                    ? (c >= 128733 && c <= 128741)
                    : c <= 128745)
                  : (c <= 128748 || c == 128752))
                : (c <= 128764 || (c < 129292
                  ? (c < 129008
                    ? (c >= 128992 && c <= 129003)
                    : c <= 129008)
                  : (c <= 129338 || (c >= 129340 && c <= 129349)))))
              : (c <= 129535 || (c < 129712
                ? (c < 129664
                  ? (c < 129656
                    ? (c >= 129648 && c <= 129652)
                    : c <= 129660)
                  : (c <= 129670 || (c >= 129680 && c <= 129708)))
                : (c <= 129722 || (c < 129760
                  ? (c < 129744
                    ? (c >= 129728 && c <= 129733)
                    : c <= 129753)
                  : (c <= 129767 || (c >= 129776 && c <= 129782)))))))))))))))));
}

static inline bool sym__identifier_char_character_set_1(int32_t c) {
  return (c < 6002
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '-'
                ? (c < '#'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '?' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '|')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 768 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1791
            ? (c < 1488
              ? (c < 1471
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1646
                ? (c < 1552
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1759
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))))
            : (c <= 1791 || (c < 2144
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))
                : (c <= 2042 || (c < 2048
                  ? c == 2045
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2275
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))
                : (c <= 2403 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2435)))))))))
        : (c <= 2444 || (c < 2662
          ? (c < 2561
            ? (c < 2507
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2534
                ? (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || c == 2558))))))
            : (c <= 2563 || (c < 2620
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2620 || (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2677 || (c < 2821
            ? (c < 2748
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2757 || (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))))
            : (c <= 2828 || (c < 2891
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))
              : (c <= 2893 || (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2927 || (c < 2946
                  ? (c >= 2929 && c <= 2935)
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3585
        ? (c < 3218
          ? (c < 3086
            ? (c < 2990
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3165
              ? (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))))
          : (c <= 3240 || (c < 3412
            ? (c < 3296
              ? (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))
              : (c <= 3299 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))))
            : (c <= 3427 || (c < 3520
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3571)))))))))
        : (c <= 3642 || (c < 4304
          ? (c < 3872
            ? (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))
            : (c <= 3891 || (c < 3993
              ? (c < 3902
                ? (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4256
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))))
          : (c <= 4346 || (c < 4888
            ? (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5792
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))))))))))
    : (c <= 6003 || (c < 42623
      ? (c < 8455
        ? (c < 7245
          ? (c < 6528
            ? (c < 6176
              ? (c < 6112
                ? (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))
                : (c <= 6121 || (c < 6155
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))))
              : (c <= 6264 || (c < 6432
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6443 || (c < 6470
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))))
            : (c <= 6571 || (c < 6823
              ? (c < 6688
                ? (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))
                : (c <= 6750 || (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7019
                ? (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
          : (c <= 11734 || (c < 12704
            ? (c < 12353
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12540
                ? (c < 12445
                  ? (c >= 12441 && c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))))))
            : (c <= 12735 || (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym___identifier_char_no_digit_character_set_1(int32_t c) {
  return (c < 6002
    ? (c < 2949
      ? (c < 2437
        ? (c < 1329
          ? (c < 248
            ? (c < '~'
              ? (c < '-'
                ? (c < '$'
                  ? c == '!'
                  : (c <= '\'' || (c >= '*' && c <= '+')))
                : (c <= ':' || (c < '^'
                  ? (c >= '?' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '|')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 768 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1155 && c <= 1327)))))))))
          : (c <= 1366 || (c < 1791
            ? (c < 1488
              ? (c < 1471
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1425 && c <= 1469)))
                : (c <= 1471 || (c < 1476
                  ? (c >= 1473 && c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1646
                ? (c < 1552
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1562 || (c >= 1568 && c <= 1641)))
                : (c <= 1747 || (c < 1759
                  ? (c >= 1749 && c <= 1756)
                  : (c <= 1768 || (c >= 1770 && c <= 1788)))))))
            : (c <= 1791 || (c < 2144
              ? (c < 2042
                ? (c < 1869
                  ? (c >= 1808 && c <= 1866)
                  : (c <= 1969 || (c >= 1984 && c <= 2037)))
                : (c <= 2042 || (c < 2048
                  ? c == 2045
                  : (c <= 2093 || (c >= 2112 && c <= 2139)))))
              : (c <= 2154 || (c < 2275
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2200 && c <= 2273)))
                : (c <= 2403 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2435)))))))))
        : (c <= 2444 || (c < 2662
          ? (c < 2561
            ? (c < 2507
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2492
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2500 || (c >= 2503 && c <= 2504)))))
              : (c <= 2510 || (c < 2534
                ? (c < 2524
                  ? c == 2519
                  : (c <= 2525 || (c >= 2527 && c <= 2531)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || c == 2558))))))
            : (c <= 2563 || (c < 2620
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2620 || (c < 2641
                ? (c < 2631
                  ? (c >= 2622 && c <= 2626)
                  : (c <= 2632 || (c >= 2635 && c <= 2637)))
                : (c <= 2641 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2677 || (c < 2821
            ? (c < 2748
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2689 && c <= 2691)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))))
              : (c <= 2757 || (c < 2784
                ? (c < 2763
                  ? (c >= 2759 && c <= 2761)
                  : (c <= 2765 || c == 2768))
                : (c <= 2787 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2815 || (c >= 2817 && c <= 2819)))))))
            : (c <= 2828 || (c < 2891
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2876
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))
              : (c <= 2893 || (c < 2918
                ? (c < 2908
                  ? (c >= 2901 && c <= 2903)
                  : (c <= 2909 || (c >= 2911 && c <= 2915)))
                : (c <= 2927 || (c < 2946
                  ? (c >= 2929 && c <= 2935)
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3585
        ? (c < 3218
          ? (c < 3086
            ? (c < 2990
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3024
                ? (c < 3014
                  ? (c >= 3006 && c <= 3010)
                  : (c <= 3016 || (c >= 3018 && c <= 3021)))
                : (c <= 3024 || (c < 3046
                  ? c == 3031
                  : (c <= 3058 || (c >= 3072 && c <= 3084)))))))
            : (c <= 3088 || (c < 3165
              ? (c < 3142
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || (c >= 3132 && c <= 3140)))
                : (c <= 3144 || (c < 3157
                  ? (c >= 3146 && c <= 3149)
                  : (c <= 3158 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3171)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3203 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))))
          : (c <= 3240 || (c < 3412
            ? (c < 3296
              ? (c < 3270
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || (c >= 3260 && c <= 3268)))
                : (c <= 3272 || (c < 3285
                  ? (c >= 3274 && c <= 3277)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))
              : (c <= 3299 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3328 && c <= 3340)))
                : (c <= 3344 || (c < 3398
                  ? (c >= 3346 && c <= 3396)
                  : (c <= 3400 || (c >= 3402 && c <= 3406)))))))
            : (c <= 3427 || (c < 3520
              ? (c < 3461
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3457 && c <= 3459)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3544
                ? (c < 3535
                  ? c == 3530
                  : (c <= 3540 || c == 3542))
                : (c <= 3551 || (c < 3570
                  ? (c >= 3558 && c <= 3567)
                  : c <= 3571)))))))))
        : (c <= 3642 || (c < 4304
          ? (c < 3872
            ? (c < 3751
              ? (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3662)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3773 || (c < 3792
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3864 && c <= 3865)))))))
            : (c <= 3891 || (c < 3993
              ? (c < 3902
                ? (c < 3895
                  ? c == 3893
                  : (c <= 3895 || c == 3897))
                : (c <= 3911 || (c < 3953
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3972 || (c >= 3974 && c <= 3991)))))
              : (c <= 4028 || (c < 4256
                ? (c < 4096
                  ? c == 4038
                  : (c <= 4169 || (c >= 4176 && c <= 4253)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))))
          : (c <= 4346 || (c < 4888
            ? (c < 4752
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4802
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5792
              ? (c < 5024
                ? (c < 4969
                  ? (c >= 4957 && c <= 4959)
                  : (c <= 4988 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5909 || (c >= 5919 && c <= 5940)))
                : (c <= 5971 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))))))))))
    : (c <= 6003 || (c < 42623
      ? (c < 8455
        ? (c < 7245
          ? (c < 6528
            ? (c < 6176
              ? (c < 6112
                ? (c < 6103
                  ? (c >= 6016 && c <= 6099)
                  : (c <= 6103 || (c >= 6108 && c <= 6109)))
                : (c <= 6121 || (c < 6155
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6157 || (c >= 6159 && c <= 6169)))))
              : (c <= 6264 || (c < 6432
                ? (c < 6320
                  ? (c >= 6272 && c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6443 || (c < 6470
                  ? (c >= 6448 && c <= 6459)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))))
            : (c <= 6571 || (c < 6823
              ? (c < 6688
                ? (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6618 || (c >= 6656 && c <= 6683)))
                : (c <= 6750 || (c < 6783
                  ? (c >= 6752 && c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))
              : (c <= 6823 || (c < 7019
                ? (c < 6912
                  ? (c >= 6832 && c <= 6862)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))
                : (c <= 7027 || (c < 7168
                  ? (c >= 7040 && c <= 7155)
                  : (c <= 7223 || (c >= 7232 && c <= 7241)))))))))
          : (c <= 7293 || (c < 8118
            ? (c < 7968
              ? (c < 7376
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7378 || (c < 7424
                  ? (c >= 7380 && c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))
            : (c <= 8124 || (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8450
                  ? (c >= 8400 && c <= 8432)
                  : c <= 8450)))))))))
        : (c <= 8455 || (c < 11728
          ? (c < 11264
            ? (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : (c <= 9471 || (c >= 10102 && c <= 10131)))))))
            : (c <= 11492 || (c < 11647
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11499 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))))
          : (c <= 11734 || (c < 12704
            ? (c < 12353
              ? (c < 12293
                ? (c < 11744
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11775 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12335)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12540
                ? (c < 12445
                  ? (c >= 12441 && c <= 12442)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12690 && c <= 12693)))))))
            : (c <= 12735 || (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42512
                ? (c < 42192
                  ? (c >= 19968 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42612
                  ? (c >= 42560 && c <= 42610)
                  : c <= 42621)))))))))))
      : (c <= 42737 || (c < 65296
        ? (c < 43793
          ? (c < 43312
            ? (c < 43052
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : (c <= 42969 || (c >= 42994 && c <= 43047)))))
              : (c <= 43052 || (c < 43216
                ? (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : (c <= 43123 || (c >= 43136 && c <= 43205)))
                : (c <= 43225 || (c < 43259
                  ? (c >= 43232 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43309)))))))
            : (c <= 43347 || (c < 43616
              ? (c < 43488
                ? (c < 43392
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))
              : (c <= 43638 || (c < 43762
                ? (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43759)))
                : (c <= 43766 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44012
                  ? (c >= 43888 && c <= 44010)
                  : (c <= 44013 || (c >= 44016 && c <= 44025)))))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65056
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65024 && c <= 65039)))
                : (c <= 65071 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66736
          ? (c < 65856
            ? (c < 65536
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : (c <= 65786 || (c >= 65799 && c <= 65843)))))))
            : (c <= 65912 || (c < 66384
              ? (c < 66208
                ? (c < 66045
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66045 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66304
                  ? (c >= 66272 && c <= 66299)
                  : (c <= 66339 || (c >= 66349 && c <= 66378)))))
              : (c <= 66426 || (c < 66513
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66517 || (c < 66720
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66729)))))))
          : (c <= 66771 || (c < 67463
            ? (c < 66967
              ? (c < 66928
                ? (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))
              : (c <= 66977 || (c < 67072
                ? (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))
                : (c <= 67382 || (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_escaped_whitespace_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == 11) ADVANCE(61);
      if (lookahead == '\f') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(61);
      if (lookahead == 8232) ADVANCE(61);
      if (lookahead == 8233) ADVANCE(61);
      if (lookahead == 65279) ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(53);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(61);
      if (sym__normal_bare_identifier_character_set_1(lookahead)) ADVANCE(52);
      if (sym__normal_bare_identifier_character_set_2(lookahead)) ADVANCE(52);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      if (sym__normal_bare_identifier_character_set_3(lookahead)) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      if (sym___identifier_char_no_digit_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      if (sym__identifier_char_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == 11) ADVANCE(97);
      if (lookahead == '\f') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == 133) ADVANCE(96);
      if (lookahead == 8232) ADVANCE(99);
      if (lookahead == 8233) ADVANCE(100);
      if (lookahead == 65279) ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(102);
      if (sym__normal_bare_identifier_character_set_4(lookahead)) ADVANCE(52);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_DASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 't') ADVANCE(46);
      if (sym__normal_bare_identifier_character_set_5(lookahead)) ADVANCE(52);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(52);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(40);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(52);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (sym__normal_bare_identifier_character_set_6(lookahead)) ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'f') ADVANCE(85);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'f') ADVANCE(86);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'i') ADVANCE(44);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(47);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(33);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'n') ADVANCE(34);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'r') ADVANCE(51);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(31);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 's') ADVANCE(32);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(29);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(39);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (lookahead == 'u') ADVANCE(30);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__normal_bare_identifier);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier_char);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym___identifier_char_no_digit);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_null);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUNDnull);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__escaped_string_token1);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(63);
      if (lookahead == 'u') ADVANCE(11);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escaped_whitespace);
      if (lookahead == '\r') ADVANCE(65);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escaped_whitespace);
      if (sym_escaped_whitespace_character_set_1(lookahead)) ADVANCE(64);
      if (lookahead == '\r') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_E);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym__);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__digit);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__digit);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__octal_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUNDinf);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_POUND_DASHinf);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_POUNDnan);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_POUNDtrue);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_POUNDfalse);
      if (sym__normal_bare_identifier_character_set_7(lookahead)) ADVANCE(52);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__newline_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__newline_token2);
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__newline_token3);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__newline_token8);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bom);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__unicode_space);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(33);
      if (lookahead == '8') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(73);
      if (lookahead == '6') ADVANCE(74);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_irl);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_url);
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 62:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 64:
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ipv4);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ipv6);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 82:
      if (lookahead == '4') ADVANCE(98);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_regex);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_base64);
      END_STATE();
    case 99:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == '1') ADVANCE(124);
      if (lookahead == '6') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == '3') ADVANCE(134);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == '2') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == '4') ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_hostname);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_country_DASH2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_country_DASH3);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_date_DASHtime);
      END_STATE();
    case 137:
      if (lookahead == '8') ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_decimal64);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_idn_DASHemail);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 144:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_decimal128);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_idn_DASHhostname);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_url_DASHtemplate);
      END_STATE();
    case 160:
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_iri_DASHreference);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_url_DASHreference);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_country_DASHsubdivision);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 1, .external_lex_state = 1},
  [49] = {.lex_state = 1, .external_lex_state = 1},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 19, .external_lex_state = 2},
  [69] = {.lex_state = 19, .external_lex_state = 2},
  [70] = {.lex_state = 19, .external_lex_state = 2},
  [71] = {.lex_state = 19, .external_lex_state = 2},
  [72] = {.lex_state = 19, .external_lex_state = 2},
  [73] = {.lex_state = 19, .external_lex_state = 2},
  [74] = {.lex_state = 19, .external_lex_state = 2},
  [75] = {.lex_state = 19, .external_lex_state = 2},
  [76] = {.lex_state = 19, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 19, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 19, .external_lex_state = 2},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 19, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 19, .external_lex_state = 3},
  [91] = {.lex_state = 19, .external_lex_state = 3},
  [92] = {.lex_state = 19, .external_lex_state = 3},
  [93] = {.lex_state = 19, .external_lex_state = 3},
  [94] = {.lex_state = 19, .external_lex_state = 3},
  [95] = {.lex_state = 19, .external_lex_state = 3},
  [96] = {.lex_state = 19, .external_lex_state = 3},
  [97] = {.lex_state = 19, .external_lex_state = 3},
  [98] = {.lex_state = 19, .external_lex_state = 3},
  [99] = {.lex_state = 19, .external_lex_state = 2},
  [100] = {.lex_state = 19, .external_lex_state = 3},
  [101] = {.lex_state = 19, .external_lex_state = 3},
  [102] = {.lex_state = 19, .external_lex_state = 3},
  [103] = {.lex_state = 19, .external_lex_state = 3},
  [104] = {.lex_state = 19, .external_lex_state = 3},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 19, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 19, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 19, .external_lex_state = 2},
  [113] = {.lex_state = 19, .external_lex_state = 2},
  [114] = {.lex_state = 19, .external_lex_state = 3},
  [115] = {.lex_state = 19, .external_lex_state = 3},
  [116] = {.lex_state = 19, .external_lex_state = 3},
  [117] = {.lex_state = 19, .external_lex_state = 3},
  [118] = {.lex_state = 19, .external_lex_state = 3},
  [119] = {.lex_state = 19, .external_lex_state = 3},
  [120] = {.lex_state = 19, .external_lex_state = 3},
  [121] = {.lex_state = 19, .external_lex_state = 3},
  [122] = {.lex_state = 19, .external_lex_state = 3},
  [123] = {.lex_state = 19, .external_lex_state = 3},
  [124] = {.lex_state = 19, .external_lex_state = 3},
  [125] = {.lex_state = 19, .external_lex_state = 3},
  [126] = {.lex_state = 19, .external_lex_state = 3},
  [127] = {.lex_state = 19, .external_lex_state = 3},
  [128] = {.lex_state = 19, .external_lex_state = 3},
  [129] = {.lex_state = 4, .external_lex_state = 3},
  [130] = {.lex_state = 19, .external_lex_state = 3},
  [131] = {.lex_state = 19, .external_lex_state = 3},
  [132] = {.lex_state = 19, .external_lex_state = 3},
  [133] = {.lex_state = 19, .external_lex_state = 3},
  [134] = {.lex_state = 19, .external_lex_state = 3},
  [135] = {.lex_state = 19, .external_lex_state = 3},
  [136] = {.lex_state = 19, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 3},
  [138] = {.lex_state = 19, .external_lex_state = 3},
  [139] = {.lex_state = 19, .external_lex_state = 3},
  [140] = {.lex_state = 19, .external_lex_state = 3},
  [141] = {.lex_state = 19, .external_lex_state = 3},
  [142] = {.lex_state = 19, .external_lex_state = 3},
  [143] = {.lex_state = 19, .external_lex_state = 3},
  [144] = {.lex_state = 19, .external_lex_state = 3},
  [145] = {.lex_state = 19, .external_lex_state = 3},
  [146] = {.lex_state = 19, .external_lex_state = 3},
  [147] = {.lex_state = 19, .external_lex_state = 3},
  [148] = {.lex_state = 19, .external_lex_state = 3},
  [149] = {.lex_state = 19, .external_lex_state = 3},
  [150] = {.lex_state = 19, .external_lex_state = 3},
  [151] = {.lex_state = 19, .external_lex_state = 3},
  [152] = {.lex_state = 19, .external_lex_state = 3},
  [153] = {.lex_state = 4, .external_lex_state = 3},
  [154] = {.lex_state = 19, .external_lex_state = 3},
  [155] = {.lex_state = 19, .external_lex_state = 3},
  [156] = {.lex_state = 19, .external_lex_state = 3},
  [157] = {.lex_state = 19, .external_lex_state = 3},
  [158] = {.lex_state = 19, .external_lex_state = 3},
  [159] = {.lex_state = 19, .external_lex_state = 3},
  [160] = {.lex_state = 19, .external_lex_state = 3},
  [161] = {.lex_state = 19, .external_lex_state = 3},
  [162] = {.lex_state = 19, .external_lex_state = 2},
  [163] = {.lex_state = 19, .external_lex_state = 2},
  [164] = {.lex_state = 19, .external_lex_state = 2},
  [165] = {.lex_state = 19, .external_lex_state = 2},
  [166] = {.lex_state = 19, .external_lex_state = 2},
  [167] = {.lex_state = 19, .external_lex_state = 2},
  [168] = {.lex_state = 19, .external_lex_state = 2},
  [169] = {.lex_state = 19, .external_lex_state = 2},
  [170] = {.lex_state = 19, .external_lex_state = 2},
  [171] = {.lex_state = 19, .external_lex_state = 2},
  [172] = {.lex_state = 19, .external_lex_state = 2},
  [173] = {.lex_state = 19, .external_lex_state = 2},
  [174] = {.lex_state = 19, .external_lex_state = 2},
  [175] = {.lex_state = 19, .external_lex_state = 2},
  [176] = {.lex_state = 19, .external_lex_state = 2},
  [177] = {.lex_state = 19, .external_lex_state = 2},
  [178] = {.lex_state = 19, .external_lex_state = 2},
  [179] = {.lex_state = 19, .external_lex_state = 2},
  [180] = {.lex_state = 19, .external_lex_state = 2},
  [181] = {.lex_state = 19, .external_lex_state = 2},
  [182] = {.lex_state = 19, .external_lex_state = 2},
  [183] = {.lex_state = 19, .external_lex_state = 2},
  [184] = {.lex_state = 19, .external_lex_state = 2},
  [185] = {.lex_state = 19, .external_lex_state = 2},
  [186] = {.lex_state = 19, .external_lex_state = 2},
  [187] = {.lex_state = 19, .external_lex_state = 2},
  [188] = {.lex_state = 19, .external_lex_state = 2},
  [189] = {.lex_state = 19, .external_lex_state = 2},
  [190] = {.lex_state = 1, .external_lex_state = 2},
  [191] = {.lex_state = 19, .external_lex_state = 2},
  [192] = {.lex_state = 19, .external_lex_state = 2},
  [193] = {.lex_state = 19, .external_lex_state = 2},
  [194] = {.lex_state = 1, .external_lex_state = 2},
  [195] = {.lex_state = 19, .external_lex_state = 2},
  [196] = {.lex_state = 19, .external_lex_state = 2},
  [197] = {.lex_state = 19, .external_lex_state = 2},
  [198] = {.lex_state = 19, .external_lex_state = 2},
  [199] = {.lex_state = 19, .external_lex_state = 2},
  [200] = {.lex_state = 19, .external_lex_state = 2},
  [201] = {.lex_state = 19, .external_lex_state = 2},
  [202] = {.lex_state = 19, .external_lex_state = 2},
  [203] = {.lex_state = 19, .external_lex_state = 2},
  [204] = {.lex_state = 19, .external_lex_state = 2},
  [205] = {.lex_state = 19, .external_lex_state = 2},
  [206] = {.lex_state = 19, .external_lex_state = 2},
  [207] = {.lex_state = 19, .external_lex_state = 2},
  [208] = {.lex_state = 19, .external_lex_state = 2},
  [209] = {.lex_state = 1, .external_lex_state = 2},
  [210] = {.lex_state = 19, .external_lex_state = 2},
  [211] = {.lex_state = 19, .external_lex_state = 2},
  [212] = {.lex_state = 5, .external_lex_state = 3},
  [213] = {.lex_state = 5, .external_lex_state = 3},
  [214] = {.lex_state = 4, .external_lex_state = 3},
  [215] = {.lex_state = 4, .external_lex_state = 3},
  [216] = {.lex_state = 5, .external_lex_state = 3},
  [217] = {.lex_state = 5, .external_lex_state = 3},
  [218] = {.lex_state = 5, .external_lex_state = 3},
  [219] = {.lex_state = 6, .external_lex_state = 3},
  [220] = {.lex_state = 4, .external_lex_state = 3},
  [221] = {.lex_state = 19, .external_lex_state = 2},
  [222] = {.lex_state = 19, .external_lex_state = 2},
  [223] = {.lex_state = 7, .external_lex_state = 3},
  [224] = {.lex_state = 6, .external_lex_state = 3},
  [225] = {.lex_state = 6, .external_lex_state = 3},
  [226] = {.lex_state = 7, .external_lex_state = 3},
  [227] = {.lex_state = 7, .external_lex_state = 3},
  [228] = {.lex_state = 6, .external_lex_state = 3},
  [229] = {.lex_state = 6, .external_lex_state = 3},
  [230] = {.lex_state = 4, .external_lex_state = 3},
  [231] = {.lex_state = 19, .external_lex_state = 2},
  [232] = {.lex_state = 19, .external_lex_state = 2},
  [233] = {.lex_state = 19, .external_lex_state = 3},
  [234] = {.lex_state = 19, .external_lex_state = 2},
  [235] = {.lex_state = 19, .external_lex_state = 2},
  [236] = {.lex_state = 7, .external_lex_state = 3},
  [237] = {.lex_state = 7, .external_lex_state = 3},
  [238] = {.lex_state = 3, .external_lex_state = 3},
  [239] = {.lex_state = 3, .external_lex_state = 3},
  [240] = {.lex_state = 3, .external_lex_state = 3},
  [241] = {.lex_state = 19, .external_lex_state = 3},
  [242] = {.lex_state = 19, .external_lex_state = 4},
  [243] = {.lex_state = 2, .external_lex_state = 3},
  [244] = {.lex_state = 19, .external_lex_state = 3},
  [245] = {.lex_state = 19, .external_lex_state = 3},
  [246] = {.lex_state = 19, .external_lex_state = 3},
  [247] = {.lex_state = 19, .external_lex_state = 3},
  [248] = {.lex_state = 19, .external_lex_state = 3},
  [249] = {.lex_state = 19, .external_lex_state = 3},
  [250] = {.lex_state = 19, .external_lex_state = 3},
  [251] = {.lex_state = 19, .external_lex_state = 3},
  [252] = {.lex_state = 19, .external_lex_state = 3},
  [253] = {.lex_state = 19, .external_lex_state = 3},
  [254] = {.lex_state = 19, .external_lex_state = 3},
  [255] = {.lex_state = 19, .external_lex_state = 3},
  [256] = {.lex_state = 19, .external_lex_state = 3},
  [257] = {.lex_state = 19, .external_lex_state = 3},
  [258] = {.lex_state = 19, .external_lex_state = 3},
  [259] = {.lex_state = 19, .external_lex_state = 3},
  [260] = {.lex_state = 19, .external_lex_state = 3},
  [261] = {.lex_state = 19, .external_lex_state = 3},
  [262] = {.lex_state = 19, .external_lex_state = 3},
  [263] = {.lex_state = 19, .external_lex_state = 3},
  [264] = {.lex_state = 19, .external_lex_state = 3},
  [265] = {.lex_state = 19, .external_lex_state = 3},
  [266] = {.lex_state = 19, .external_lex_state = 3},
  [267] = {.lex_state = 19, .external_lex_state = 3},
  [268] = {.lex_state = 19, .external_lex_state = 3},
  [269] = {.lex_state = 19, .external_lex_state = 3},
  [270] = {.lex_state = 19, .external_lex_state = 3},
  [271] = {.lex_state = 19, .external_lex_state = 3},
  [272] = {.lex_state = 19, .external_lex_state = 3},
  [273] = {.lex_state = 19, .external_lex_state = 3},
  [274] = {.lex_state = 19, .external_lex_state = 3},
  [275] = {.lex_state = 19, .external_lex_state = 3},
  [276] = {.lex_state = 19, .external_lex_state = 3},
  [277] = {.lex_state = 19, .external_lex_state = 3},
  [278] = {.lex_state = 19, .external_lex_state = 4},
  [279] = {.lex_state = 19, .external_lex_state = 4},
  [280] = {.lex_state = 19, .external_lex_state = 4},
  [281] = {.lex_state = 19, .external_lex_state = 4},
  [282] = {.lex_state = 19, .external_lex_state = 4},
  [283] = {.lex_state = 19, .external_lex_state = 4},
  [284] = {.lex_state = 19, .external_lex_state = 4},
  [285] = {.lex_state = 19, .external_lex_state = 4},
  [286] = {.lex_state = 19, .external_lex_state = 4},
  [287] = {.lex_state = 19, .external_lex_state = 4},
  [288] = {.lex_state = 19, .external_lex_state = 3},
  [289] = {.lex_state = 19, .external_lex_state = 3},
  [290] = {.lex_state = 19, .external_lex_state = 3},
  [291] = {.lex_state = 19, .external_lex_state = 3},
  [292] = {.lex_state = 19, .external_lex_state = 3},
  [293] = {.lex_state = 19, .external_lex_state = 3},
  [294] = {.lex_state = 19, .external_lex_state = 3},
  [295] = {.lex_state = 19, .external_lex_state = 3},
  [296] = {.lex_state = 19, .external_lex_state = 3},
  [297] = {.lex_state = 19, .external_lex_state = 3},
  [298] = {.lex_state = 19, .external_lex_state = 3},
  [299] = {.lex_state = 19, .external_lex_state = 3},
  [300] = {.lex_state = 19, .external_lex_state = 3},
  [301] = {.lex_state = 19, .external_lex_state = 3},
  [302] = {.lex_state = 19, .external_lex_state = 3},
  [303] = {.lex_state = 19, .external_lex_state = 3},
  [304] = {.lex_state = 8, .external_lex_state = 3},
  [305] = {.lex_state = 8, .external_lex_state = 3},
  [306] = {.lex_state = 8, .external_lex_state = 3},
  [307] = {.lex_state = 8, .external_lex_state = 3},
  [308] = {.lex_state = 8, .external_lex_state = 3},
  [309] = {.lex_state = 8, .external_lex_state = 3},
  [310] = {.lex_state = 8, .external_lex_state = 3},
  [311] = {.lex_state = 8, .external_lex_state = 3},
  [312] = {.lex_state = 8, .external_lex_state = 3},
  [313] = {.lex_state = 8, .external_lex_state = 3},
  [314] = {.lex_state = 8, .external_lex_state = 3},
  [315] = {.lex_state = 19, .external_lex_state = 4},
  [316] = {.lex_state = 2, .external_lex_state = 4},
  [317] = {.lex_state = 19, .external_lex_state = 2},
  [318] = {.lex_state = 19, .external_lex_state = 4},
  [319] = {.lex_state = 19, .external_lex_state = 4},
  [320] = {.lex_state = 19, .external_lex_state = 4},
  [321] = {.lex_state = 19, .external_lex_state = 4},
  [322] = {.lex_state = 19, .external_lex_state = 4},
  [323] = {.lex_state = 19, .external_lex_state = 4},
  [324] = {.lex_state = 19, .external_lex_state = 2},
  [325] = {.lex_state = 19, .external_lex_state = 4},
  [326] = {.lex_state = 19, .external_lex_state = 2},
  [327] = {.lex_state = 19, .external_lex_state = 4},
  [328] = {.lex_state = 19, .external_lex_state = 4},
  [329] = {.lex_state = 19, .external_lex_state = 4},
  [330] = {.lex_state = 19, .external_lex_state = 4},
  [331] = {.lex_state = 19, .external_lex_state = 4},
  [332] = {.lex_state = 19, .external_lex_state = 4},
  [333] = {.lex_state = 19, .external_lex_state = 4},
  [334] = {.lex_state = 19, .external_lex_state = 4},
  [335] = {.lex_state = 19, .external_lex_state = 4},
  [336] = {.lex_state = 19, .external_lex_state = 4},
  [337] = {.lex_state = 3, .external_lex_state = 4},
  [338] = {.lex_state = 3, .external_lex_state = 4},
  [339] = {.lex_state = 3, .external_lex_state = 4},
  [340] = {.lex_state = 19, .external_lex_state = 4},
  [341] = {.lex_state = 19, .external_lex_state = 4},
  [342] = {.lex_state = 19, .external_lex_state = 4},
  [343] = {.lex_state = 19, .external_lex_state = 4},
  [344] = {.lex_state = 19, .external_lex_state = 4},
  [345] = {.lex_state = 9, .external_lex_state = 4},
  [346] = {.lex_state = 9, .external_lex_state = 4},
  [347] = {.lex_state = 9, .external_lex_state = 4},
  [348] = {.lex_state = 2, .external_lex_state = 4},
  [349] = {.lex_state = 9, .external_lex_state = 4},
  [350] = {.lex_state = 9, .external_lex_state = 4},
  [351] = {.lex_state = 19, .external_lex_state = 4},
  [352] = {.lex_state = 19, .external_lex_state = 4},
  [353] = {.lex_state = 19, .external_lex_state = 4},
  [354] = {.lex_state = 19, .external_lex_state = 4},
  [355] = {.lex_state = 19, .external_lex_state = 4},
  [356] = {.lex_state = 19, .external_lex_state = 4},
  [357] = {.lex_state = 19, .external_lex_state = 4},
  [358] = {.lex_state = 9, .external_lex_state = 4},
  [359] = {.lex_state = 19, .external_lex_state = 4},
  [360] = {.lex_state = 19, .external_lex_state = 4},
  [361] = {.lex_state = 19, .external_lex_state = 4},
  [362] = {.lex_state = 5, .external_lex_state = 4},
  [363] = {.lex_state = 5, .external_lex_state = 4},
  [364] = {.lex_state = 6, .external_lex_state = 4},
  [365] = {.lex_state = 0, .external_lex_state = 4},
  [366] = {.lex_state = 6, .external_lex_state = 4},
  [367] = {.lex_state = 7, .external_lex_state = 4},
  [368] = {.lex_state = 7, .external_lex_state = 4},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token_multi_line_comment = 1,
  ts_external_token_multi_line_string = 2,
  ts_external_token__raw_string = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token_multi_line_comment] = sym_multi_line_comment,
  [ts_external_token_multi_line_string] = sym_multi_line_string,
  [ts_external_token__raw_string] = sym__raw_string,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token_multi_line_string] = true,
    [ts_external_token__raw_string] = true,
  },
  [2] = {
    [ts_external_token_multi_line_comment] = true,
    [ts_external_token_multi_line_string] = true,
    [ts_external_token__raw_string] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token_multi_line_comment] = true,
  },
  [4] = {
    [ts_external_token_multi_line_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__normal_bare_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__identifier_char] = ACTIONS(1),
    [sym___identifier_char_no_digit] = ACTIONS(1),
    [sym___identifier_char_no_digit_sign] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_decimal64] = ACTIONS(1),
    [anon_sym_decimal128] = ACTIONS(1),
    [anon_sym_date_DASHtime] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_country_DASH2] = ACTIONS(1),
    [anon_sym_country_DASH3] = ACTIONS(1),
    [anon_sym_country_DASHsubdivision] = ACTIONS(1),
    [anon_sym_email] = ACTIONS(1),
    [anon_sym_idn_DASHemail] = ACTIONS(1),
    [anon_sym_hostname] = ACTIONS(1),
    [anon_sym_idn_DASHhostname] = ACTIONS(1),
    [anon_sym_ipv4] = ACTIONS(1),
    [anon_sym_ipv6] = ACTIONS(1),
    [anon_sym_url] = ACTIONS(1),
    [anon_sym_url_DASHreference] = ACTIONS(1),
    [anon_sym_irl] = ACTIONS(1),
    [anon_sym_iri_DASHreference] = ACTIONS(1),
    [anon_sym_url_DASHtemplate] = ACTIONS(1),
    [anon_sym_uuid] = ACTIONS(1),
    [anon_sym_regex] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__escaped_string_token1] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__octal_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token3] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [aux_sym__newline_token8] = ACTIONS(1),
    [sym__bom] = ACTIONS(1),
    [sym__unicode_space] = ACTIONS(1),
    [aux_sym_single_line_comment_token1] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_multi_line_string] = ACTIONS(1),
    [sym__raw_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(365),
    [sym_node] = STATE(53),
    [sym_identifier] = STATE(91),
    [sym__bare_identifier] = STATE(268),
    [sym_type] = STATE(235),
    [sym_string] = STATE(268),
    [sym__escaped_string] = STATE(247),
    [sym__sign] = STATE(243),
    [sym__linespace] = STATE(75),
    [sym__newline] = STATE(75),
    [sym__ws] = STATE(75),
    [sym_single_line_comment] = STATE(75),
    [aux_sym_document_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__normal_bare_identifier] = ACTIONS(7),
    [anon_sym_SLASH_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [aux_sym__newline_token1] = ACTIONS(17),
    [aux_sym__newline_token2] = ACTIONS(19),
    [aux_sym__newline_token3] = ACTIONS(17),
    [aux_sym__newline_token4] = ACTIONS(17),
    [aux_sym__newline_token5] = ACTIONS(17),
    [aux_sym__newline_token6] = ACTIONS(17),
    [aux_sym__newline_token7] = ACTIONS(17),
    [aux_sym__newline_token8] = ACTIONS(17),
    [sym__bom] = ACTIONS(17),
    [sym__unicode_space] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym_multi_line_comment] = ACTIONS(17),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [2] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(115),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(183),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(183),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(183),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(31),
    [aux_sym__newline_token2] = ACTIONS(53),
    [aux_sym__newline_token3] = ACTIONS(31),
    [aux_sym__newline_token4] = ACTIONS(31),
    [aux_sym__newline_token5] = ACTIONS(31),
    [aux_sym__newline_token6] = ACTIONS(31),
    [aux_sym__newline_token7] = ACTIONS(31),
    [aux_sym__newline_token8] = ACTIONS(31),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(31),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [3] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(145),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(168),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(168),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(168),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(57),
    [aux_sym__newline_token2] = ACTIONS(59),
    [aux_sym__newline_token3] = ACTIONS(57),
    [aux_sym__newline_token4] = ACTIONS(57),
    [aux_sym__newline_token5] = ACTIONS(57),
    [aux_sym__newline_token6] = ACTIONS(57),
    [aux_sym__newline_token7] = ACTIONS(57),
    [aux_sym__newline_token8] = ACTIONS(57),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(57),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [4] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(152),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(174),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(174),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(174),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(61),
    [aux_sym__newline_token2] = ACTIONS(63),
    [aux_sym__newline_token3] = ACTIONS(61),
    [aux_sym__newline_token4] = ACTIONS(61),
    [aux_sym__newline_token5] = ACTIONS(61),
    [aux_sym__newline_token6] = ACTIONS(61),
    [aux_sym__newline_token7] = ACTIONS(61),
    [aux_sym__newline_token8] = ACTIONS(61),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(61),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [5] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(124),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(210),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(210),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(210),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(65),
    [aux_sym__newline_token2] = ACTIONS(67),
    [aux_sym__newline_token3] = ACTIONS(65),
    [aux_sym__newline_token4] = ACTIONS(65),
    [aux_sym__newline_token5] = ACTIONS(65),
    [aux_sym__newline_token6] = ACTIONS(65),
    [aux_sym__newline_token7] = ACTIONS(65),
    [aux_sym__newline_token8] = ACTIONS(65),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(65),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [6] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(160),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(202),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(202),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(202),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(69),
    [aux_sym__newline_token2] = ACTIONS(71),
    [aux_sym__newline_token3] = ACTIONS(69),
    [aux_sym__newline_token4] = ACTIONS(69),
    [aux_sym__newline_token5] = ACTIONS(69),
    [aux_sym__newline_token6] = ACTIONS(69),
    [aux_sym__newline_token7] = ACTIONS(69),
    [aux_sym__newline_token8] = ACTIONS(69),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(69),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [7] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(134),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(177),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(177),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(177),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(73),
    [aux_sym__newline_token2] = ACTIONS(75),
    [aux_sym__newline_token3] = ACTIONS(73),
    [aux_sym__newline_token4] = ACTIONS(73),
    [aux_sym__newline_token5] = ACTIONS(73),
    [aux_sym__newline_token6] = ACTIONS(73),
    [aux_sym__newline_token7] = ACTIONS(73),
    [aux_sym__newline_token8] = ACTIONS(73),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(73),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [8] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(120),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(207),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(207),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(207),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(77),
    [aux_sym__newline_token2] = ACTIONS(79),
    [aux_sym__newline_token3] = ACTIONS(77),
    [aux_sym__newline_token4] = ACTIONS(77),
    [aux_sym__newline_token5] = ACTIONS(77),
    [aux_sym__newline_token6] = ACTIONS(77),
    [aux_sym__newline_token7] = ACTIONS(77),
    [aux_sym__newline_token8] = ACTIONS(77),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(77),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [9] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(154),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(178),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(178),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(178),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(81),
    [aux_sym__newline_token2] = ACTIONS(83),
    [aux_sym__newline_token3] = ACTIONS(81),
    [aux_sym__newline_token4] = ACTIONS(81),
    [aux_sym__newline_token5] = ACTIONS(81),
    [aux_sym__newline_token6] = ACTIONS(81),
    [aux_sym__newline_token7] = ACTIONS(81),
    [aux_sym__newline_token8] = ACTIONS(81),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(81),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
  [10] = {
    [sym_node_field] = STATE(253),
    [sym__node_field_comment] = STATE(252),
    [sym__node_field] = STATE(252),
    [sym_node_children] = STATE(142),
    [sym__node_space] = STATE(47),
    [sym__node_terminator] = STATE(203),
    [sym_identifier] = STATE(332),
    [sym__bare_identifier] = STATE(351),
    [sym_keyword] = STATE(274),
    [sym_prop] = STATE(251),
    [sym_value] = STATE(251),
    [sym_type] = STATE(39),
    [sym_string] = STATE(244),
    [sym__escaped_string] = STATE(247),
    [sym_number] = STATE(274),
    [sym__decimal] = STATE(269),
    [sym__integer] = STATE(215),
    [sym__sign] = STATE(316),
    [sym__hex] = STATE(269),
    [sym__octal] = STATE(269),
    [sym__binary] = STATE(269),
    [sym_keyword_number] = STATE(269),
    [sym_boolean] = STATE(266),
    [sym__escline] = STATE(43),
    [sym__newline] = STATE(203),
    [sym__ws] = STATE(37),
    [sym_single_line_comment] = STATE(203),
    [aux_sym_node_repeat1] = STATE(32),
    [aux_sym_node_repeat3] = STATE(37),
    [sym__normal_bare_identifier] = ACTIONS(25),
    [anon_sym_SLASH_DASH] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(33),
    [anon_sym_POUNDnull] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__digit] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_0x] = ACTIONS(41),
    [anon_sym_0o] = ACTIONS(43),
    [anon_sym_0b] = ACTIONS(45),
    [anon_sym_POUNDinf] = ACTIONS(47),
    [anon_sym_POUND_DASHinf] = ACTIONS(47),
    [anon_sym_POUNDnan] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_POUNDtrue] = ACTIONS(49),
    [anon_sym_POUNDfalse] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(51),
    [aux_sym__newline_token1] = ACTIONS(85),
    [aux_sym__newline_token2] = ACTIONS(87),
    [aux_sym__newline_token3] = ACTIONS(85),
    [aux_sym__newline_token4] = ACTIONS(85),
    [aux_sym__newline_token5] = ACTIONS(85),
    [aux_sym__newline_token6] = ACTIONS(85),
    [aux_sym__newline_token7] = ACTIONS(85),
    [aux_sym__newline_token8] = ACTIONS(85),
    [sym__bom] = ACTIONS(55),
    [sym__unicode_space] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym__eof] = ACTIONS(85),
    [sym_multi_line_comment] = ACTIONS(55),
    [sym_multi_line_string] = ACTIONS(23),
    [sym__raw_string] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(89), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 39,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
      aux_sym__newline_token2,
  [65] = 2,
    ACTIONS(93), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
    ACTIONS(95), 39,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
      aux_sym__newline_token2,
  [130] = 15,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(348), 1,
      sym__sign,
    STATE(354), 1,
      sym__escaped_string,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(329), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(351), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(97), 37,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [219] = 15,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(348), 1,
      sym__sign,
    STATE(354), 1,
      sym__escaped_string,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(323), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(351), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(97), 37,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [308] = 15,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(348), 1,
      sym__sign,
    STATE(354), 1,
      sym__escaped_string,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(319), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(351), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(97), 37,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [397] = 15,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(348), 1,
      sym__sign,
    STATE(354), 1,
      sym__escaped_string,
    ACTIONS(101), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(107), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(330), 2,
      sym_identifier,
      sym_annotation_type,
    STATE(351), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(97), 37,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [486] = 8,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(116), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(111), 6,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(109), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [556] = 6,
    ACTIONS(123), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym__escline,
    STATE(23), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(126), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 6,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [620] = 4,
    STATE(23), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(133), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 7,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(129), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [679] = 4,
    STATE(19), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(136), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 7,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(119), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [738] = 4,
    STATE(23), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(143), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(141), 7,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(139), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [797] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(146), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(244), 1,
      sym_string,
    STATE(247), 1,
      sym__escaped_string,
    STATE(253), 1,
      sym_node_field,
    STATE(266), 1,
      sym_boolean,
    STATE(316), 1,
      sym__sign,
    STATE(332), 1,
      sym_identifier,
    STATE(351), 1,
      sym__bare_identifier,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(251), 2,
      sym_prop,
      sym_value,
    STATE(252), 2,
      sym__node_field_comment,
      sym__node_field,
    STATE(274), 2,
      sym_keyword,
      sym_number,
    ACTIONS(47), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [912] = 4,
    STATE(23), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(156), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 7,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(152), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [971] = 4,
    STATE(21), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(159), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 7,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
    ACTIONS(129), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [1030] = 31,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      aux_sym_node_repeat1,
    STATE(39), 1,
      sym_type,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(244), 1,
      sym_string,
    STATE(247), 1,
      sym__escaped_string,
    STATE(250), 1,
      sym__node_field,
    STATE(266), 1,
      sym_boolean,
    STATE(316), 1,
      sym__sign,
    STATE(332), 1,
      sym_identifier,
    STATE(351), 1,
      sym__bare_identifier,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(251), 2,
      sym_prop,
      sym_value,
    STATE(274), 2,
      sym_keyword,
      sym_number,
    ACTIONS(47), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1141] = 2,
    ACTIONS(166), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(164), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [1194] = 31,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(244), 1,
      sym_string,
    STATE(247), 1,
      sym__escaped_string,
    STATE(263), 1,
      sym__node_field,
    STATE(266), 1,
      sym_boolean,
    STATE(316), 1,
      sym__sign,
    STATE(332), 1,
      sym_identifier,
    STATE(351), 1,
      sym__bare_identifier,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(251), 2,
      sym_prop,
      sym_value,
    STATE(274), 2,
      sym_keyword,
      sym_number,
    ACTIONS(47), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1305] = 2,
    ACTIONS(172), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(170), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [1358] = 2,
    ACTIONS(176), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(174), 38,
      sym__normal_bare_identifier,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_decimal64,
      anon_sym_decimal128,
      anon_sym_date_DASHtime,
      anon_sym_time,
      anon_sym_date,
      anon_sym_duration,
      anon_sym_decimal,
      anon_sym_currency,
      anon_sym_country_DASH2,
      anon_sym_country_DASH3,
      anon_sym_country_DASHsubdivision,
      anon_sym_email,
      anon_sym_idn_DASHemail,
      anon_sym_hostname,
      anon_sym_idn_DASHhostname,
      anon_sym_ipv4,
      anon_sym_ipv6,
      anon_sym_url,
      anon_sym_url_DASHreference,
      anon_sym_irl,
      anon_sym_iri_DASHreference,
      anon_sym_url_DASHtemplate,
      anon_sym_uuid,
      anon_sym_regex,
      anon_sym_base64,
  [1411] = 30,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(244), 1,
      sym_string,
    STATE(247), 1,
      sym__escaped_string,
    STATE(263), 1,
      sym__node_field,
    STATE(266), 1,
      sym_boolean,
    STATE(316), 1,
      sym__sign,
    STATE(332), 1,
      sym_identifier,
    STATE(351), 1,
      sym__bare_identifier,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(251), 2,
      sym_prop,
      sym_value,
    STATE(274), 2,
      sym_keyword,
      sym_number,
    ACTIONS(47), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1519] = 30,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      sym__normal_bare_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      aux_sym_node_repeat1,
    STATE(39), 1,
      sym_type,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(244), 1,
      sym_string,
    STATE(247), 1,
      sym__escaped_string,
    STATE(250), 1,
      sym__node_field,
    STATE(266), 1,
      sym_boolean,
    STATE(316), 1,
      sym__sign,
    STATE(332), 1,
      sym_identifier,
    STATE(351), 1,
      sym__bare_identifier,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(33), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(251), 2,
      sym_prop,
      sym_value,
    STATE(274), 2,
      sym_keyword,
      sym_number,
    ACTIONS(47), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(49), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1627] = 8,
    ACTIONS(178), 1,
      anon_sym_BSLASH,
    STATE(32), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(181), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(109), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(111), 21,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [1686] = 25,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(255), 1,
      sym_value,
    STATE(266), 1,
      sym_boolean,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(274), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1779] = 25,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      aux_sym_node_repeat1,
    STATE(39), 1,
      sym_type,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(266), 1,
      sym_boolean,
    STATE(272), 1,
      sym_value,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(274), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1872] = 25,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym_type,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_value,
    STATE(266), 1,
      sym_boolean,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(274), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [1965] = 25,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(33), 1,
      aux_sym_node_repeat1,
    STATE(39), 1,
      sym_type,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(260), 1,
      sym_value,
    STATE(266), 1,
      sym_boolean,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(274), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2058] = 6,
    ACTIONS(192), 1,
      anon_sym_BSLASH,
    STATE(40), 1,
      sym__escline,
    STATE(38), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(195), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(121), 21,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2111] = 4,
    STATE(38), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(198), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(154), 22,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2159] = 22,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(44), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(266), 1,
      sym_boolean,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(254), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2243] = 4,
    STATE(42), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(201), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(129), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(131), 22,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2291] = 4,
    STATE(38), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(204), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(129), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(131), 22,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2339] = 4,
    STATE(38), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(207), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(139), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(141), 22,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2387] = 4,
    STATE(41), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(210), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(121), 22,
      sym__eof,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [2435] = 22,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(41), 1,
      anon_sym_0x,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(45), 1,
      anon_sym_0b,
    ACTIONS(148), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(215), 1,
      sym__integer,
    STATE(247), 1,
      sym__escaped_string,
    STATE(266), 1,
      sym_boolean,
    STATE(353), 1,
      sym__sign,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    ACTIONS(184), 2,
      anon_sym_null,
      anon_sym_POUNDnull,
    ACTIONS(186), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(150), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(188), 3,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
    STATE(276), 3,
      sym_keyword,
      sym_string,
      sym_number,
    ACTIONS(190), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    STATE(269), 5,
      sym__decimal,
      sym__hex,
      sym__octal,
      sym__binary,
      sym_keyword_number,
  [2519] = 2,
    ACTIONS(91), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(89), 25,
      sym__eof,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2561] = 2,
    ACTIONS(170), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(172), 25,
      sym__eof,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2603] = 2,
    ACTIONS(174), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(176), 25,
      sym__eof,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2645] = 2,
    ACTIONS(164), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(166), 25,
      sym__eof,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2687] = 2,
    ACTIONS(95), 12,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      aux_sym__newline_token2,
    ACTIONS(93), 25,
      sym__eof,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [2729] = 17,
    ACTIONS(215), 1,
      sym__normal_bare_identifier,
    ACTIONS(218), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      aux_sym__newline_token2,
    ACTIONS(236), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(227), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(239), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(82), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(230), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [2799] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(55), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(70), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(244), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [2868] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(252), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(64), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(73), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(250), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [2937] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(57), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(78), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(256), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3006] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(60), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(262), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3075] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(76), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(268), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3144] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(68), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(274), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3213] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(66), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(262), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3282] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(62), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(74), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(280), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3351] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(74), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(280), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3420] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(77), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(286), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3489] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(56), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(80), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(292), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3558] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(80), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(292), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3627] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(59), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(65), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(298), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3696] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(50), 2,
      sym_node,
      aux_sym_document_repeat2,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(70), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(244), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3765] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3833] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3901] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      aux_sym__newline_token2,
    STATE(63), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(72), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(308), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [3969] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4037] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__newline_token2,
    STATE(58), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(79), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(314), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4105] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4173] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      aux_sym__newline_token2,
    STATE(51), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(106), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(318), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4241] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      aux_sym__newline_token2,
    STATE(58), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(113), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(322), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4309] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4377] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4445] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      aux_sym__newline_token2,
    STATE(54), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(112), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(326), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4513] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4581] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4649] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4717] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      aux_sym__newline_token2,
    STATE(61), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(110), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(334), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4785] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4853] = 17,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      aux_sym__newline_token2,
    STATE(52), 1,
      sym_node,
    STATE(91), 1,
      sym_identifier,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(71), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(340), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4921] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(9), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      aux_sym__newline_token2,
    STATE(91), 1,
      sym_identifier,
    STATE(199), 1,
      sym_node,
    STATE(235), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(302), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [4986] = 8,
    ACTIONS(344), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(347), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(109), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(111), 11,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5034] = 6,
    ACTIONS(350), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym__escline,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(353), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(121), 11,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
  [5076] = 4,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(356), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(139), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(141), 12,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5113] = 4,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(359), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(152), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(154), 12,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5150] = 4,
    STATE(85), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(362), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(129), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(131), 12,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5187] = 4,
    STATE(86), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(365), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(129), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(131), 12,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5224] = 4,
    STATE(88), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(368), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(119), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(121), 12,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
  [5261] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(152), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(174), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5317] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(375), 1,
      aux_sym__newline_token2,
    STATE(4), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(90), 1,
      aux_sym_node_repeat2,
    STATE(161), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(166), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(373), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5373] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(134), 1,
      sym_node_children,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(177), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(73), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5429] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(75), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(2), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(102), 1,
      aux_sym_node_repeat2,
    STATE(134), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(177), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(73), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5485] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    ACTIONS(379), 1,
      aux_sym__newline_token2,
    STATE(10), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(101), 1,
      aux_sym_node_repeat2,
    STATE(149), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(180), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(377), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5541] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(100), 1,
      aux_sym_node_repeat2,
    STATE(124), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(210), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5597] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(9), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(124), 1,
      sym_node_children,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(210), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(65), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5653] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(3), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(160), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(202), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(69), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5709] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(7), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(92), 1,
      aux_sym_node_repeat2,
    STATE(152), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(174), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(61), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5765] = 5,
    ACTIONS(386), 1,
      aux_sym__newline_token2,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 10,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [5803] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(8), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(154), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(178), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(81), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5859] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(142), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(203), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(85), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5915] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(115), 1,
      sym_node_children,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(183), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(31), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [5971] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(6), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(97), 1,
      aux_sym_node_repeat2,
    STATE(115), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(183), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(31), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6027] = 14,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      aux_sym__newline_token2,
    ACTIONS(371), 1,
      anon_sym_SLASH_DASH,
    STATE(5), 1,
      aux_sym_node_repeat1,
    STATE(43), 1,
      sym__escline,
    STATE(47), 1,
      sym__node_space,
    STATE(96), 1,
      aux_sym_node_repeat2,
    STATE(142), 1,
      sym_node_children,
    STATE(37), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(55), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(203), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(85), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6083] = 2,
    ACTIONS(164), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(166), 15,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6114] = 6,
    ACTIONS(386), 1,
      aux_sym__newline_token2,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 8,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6153] = 2,
    ACTIONS(174), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(176), 15,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6184] = 2,
    ACTIONS(170), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(172), 15,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6215] = 2,
    ACTIONS(91), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(89), 15,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6246] = 6,
    ACTIONS(386), 1,
      aux_sym__newline_token2,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 8,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6285] = 2,
    ACTIONS(95), 11,
      sym__normal_bare_identifier,
      anon_sym_null,
      anon_sym_POUNDnull,
      sym__digit,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
    ACTIONS(93), 15,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [6316] = 6,
    ACTIONS(386), 1,
      aux_sym__newline_token2,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 8,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6355] = 6,
    ACTIONS(386), 1,
      aux_sym__newline_token2,
    ACTIONS(389), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(99), 5,
      sym__linespace,
      sym__newline,
      sym__ws,
      sym_single_line_comment,
      aux_sym_document_repeat1,
    ACTIONS(381), 8,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_SLASH_DASH,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 10,
      sym_multi_line_comment,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
  [6394] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(195), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(404), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6438] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      aux_sym__newline_token2,
    STATE(158), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(159), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(416), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(198), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(412), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6482] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(418), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6526] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 1,
      aux_sym__newline_token2,
    STATE(125), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(191), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(422), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6570] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(424), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(191), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(422), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6614] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      aux_sym__newline_token2,
    STATE(132), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(162), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(418), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6658] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym__newline_token2,
    STATE(133), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(146), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(432), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(193), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(428), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6702] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(436), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(205), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(434), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6746] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(440), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(167), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(438), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6790] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(444), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(442), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6834] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      aux_sym__newline_token2,
    STATE(150), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(151), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(450), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(201), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(446), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6878] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(454), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(176), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(452), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6922] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(458), 1,
      aux_sym__newline_token2,
    STATE(148), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(456), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [6966] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(458), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(164), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(456), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7010] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(462), 1,
      aux_sym__newline_token2,
    STATE(114), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(460), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7054] = 4,
    ACTIONS(468), 1,
      aux_sym__newline_token2,
    STATE(153), 1,
      aux_sym__integer_repeat1,
    ACTIONS(466), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(464), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7086] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(462), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(169), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(460), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7130] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(472), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(188), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(470), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7174] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(187), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(474), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7218] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(480), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(185), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(478), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7262] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym__newline_token2,
    STATE(135), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(136), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(486), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(171), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(482), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7306] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(490), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(196), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(488), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7350] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(490), 1,
      aux_sym__newline_token2,
    STATE(157), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(196), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(488), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7394] = 4,
    ACTIONS(496), 1,
      aux_sym__newline_token2,
    STATE(129), 1,
      aux_sym__integer_repeat1,
    ACTIONS(494), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(492), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [7426] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(500), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(179), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(498), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7470] = 9,
    ACTIONS(504), 1,
      anon_sym_BSLASH,
    ACTIONS(507), 1,
      aux_sym__newline_token2,
    STATE(22), 1,
      aux_sym_node_repeat1,
    STATE(89), 1,
      sym__escline,
    STATE(107), 1,
      sym__node_space,
    STATE(139), 1,
      aux_sym_node_repeat2,
    STATE(84), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(509), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(502), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [7512] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(204), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(512), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7556] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      aux_sym__newline_token2,
    STATE(122), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(204), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(512), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7600] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      aux_sym__newline_token2,
    STATE(127), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(126), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(520), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(206), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(516), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7644] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(524), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(181), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(522), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7688] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(524), 1,
      aux_sym__newline_token2,
    STATE(121), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(181), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(522), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7732] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      aux_sym__newline_token2,
    STATE(123), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(156), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(530), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(184), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(526), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7776] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(480), 1,
      aux_sym__newline_token2,
    STATE(147), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(185), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(478), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7820] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(534), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(182), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(532), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7864] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(538), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(186), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(536), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7908] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(542), 1,
      aux_sym__newline_token2,
    STATE(140), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(141), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(544), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(197), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(540), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7952] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(548), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(189), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(546), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [7996] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(548), 1,
      aux_sym__newline_token2,
    STATE(155), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(189), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(546), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8040] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(552), 1,
      aux_sym__newline_token2,
    STATE(130), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(128), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(554), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(172), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(550), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8084] = 4,
    ACTIONS(561), 1,
      aux_sym__newline_token2,
    STATE(153), 1,
      aux_sym__integer_repeat1,
    ACTIONS(558), 2,
      anon_sym__,
      sym__digit,
    ACTIONS(556), 19,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8116] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(565), 1,
      aux_sym__newline_token2,
    STATE(116), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(119), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(567), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(211), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(563), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8160] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(571), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(200), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(569), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8204] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(444), 1,
      aux_sym__newline_token2,
    STATE(131), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(163), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(442), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8248] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(575), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(175), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(573), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8292] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(579), 1,
      aux_sym__newline_token2,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(410), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(173), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(577), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8336] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(579), 1,
      aux_sym__newline_token2,
    STATE(138), 1,
      aux_sym_node_repeat1,
    STATE(265), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(246), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(426), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(173), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(577), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8380] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(583), 1,
      aux_sym__newline_token2,
    STATE(143), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(144), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(585), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(170), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(581), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8424] = 10,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(406), 1,
      anon_sym_BSLASH,
    ACTIONS(589), 1,
      aux_sym__newline_token2,
    STATE(118), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(117), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(591), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    STATE(208), 3,
      sym__node_terminator,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(587), 9,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [8468] = 2,
    ACTIONS(595), 1,
      aux_sym__newline_token2,
    ACTIONS(593), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8495] = 2,
    ACTIONS(599), 1,
      aux_sym__newline_token2,
    ACTIONS(597), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8522] = 2,
    ACTIONS(603), 1,
      aux_sym__newline_token2,
    ACTIONS(601), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8549] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(98), 1,
      sym_identifier,
    STATE(192), 1,
      aux_sym_node_repeat1,
    STATE(221), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [8604] = 2,
    ACTIONS(607), 1,
      aux_sym__newline_token2,
    ACTIONS(605), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8631] = 2,
    ACTIONS(611), 1,
      aux_sym__newline_token2,
    ACTIONS(609), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8658] = 2,
    ACTIONS(615), 1,
      aux_sym__newline_token2,
    ACTIONS(613), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8685] = 2,
    ACTIONS(619), 1,
      aux_sym__newline_token2,
    ACTIONS(617), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8712] = 2,
    ACTIONS(623), 1,
      aux_sym__newline_token2,
    ACTIONS(621), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8739] = 2,
    ACTIONS(627), 1,
      aux_sym__newline_token2,
    ACTIONS(625), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8766] = 2,
    ACTIONS(631), 1,
      aux_sym__newline_token2,
    ACTIONS(629), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8793] = 2,
    ACTIONS(635), 1,
      aux_sym__newline_token2,
    ACTIONS(633), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8820] = 2,
    ACTIONS(639), 1,
      aux_sym__newline_token2,
    ACTIONS(637), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8847] = 2,
    ACTIONS(643), 1,
      aux_sym__newline_token2,
    ACTIONS(641), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8874] = 2,
    ACTIONS(647), 1,
      aux_sym__newline_token2,
    ACTIONS(645), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8901] = 2,
    ACTIONS(651), 1,
      aux_sym__newline_token2,
    ACTIONS(649), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8928] = 2,
    ACTIONS(655), 1,
      aux_sym__newline_token2,
    ACTIONS(653), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8955] = 2,
    ACTIONS(659), 1,
      aux_sym__newline_token2,
    ACTIONS(657), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [8982] = 2,
    ACTIONS(663), 1,
      aux_sym__newline_token2,
    ACTIONS(661), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9009] = 2,
    ACTIONS(667), 1,
      aux_sym__newline_token2,
    ACTIONS(665), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9036] = 2,
    ACTIONS(671), 1,
      aux_sym__newline_token2,
    ACTIONS(669), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9063] = 2,
    ACTIONS(675), 1,
      aux_sym__newline_token2,
    ACTIONS(673), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9090] = 2,
    ACTIONS(679), 1,
      aux_sym__newline_token2,
    ACTIONS(677), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9117] = 2,
    ACTIONS(683), 1,
      aux_sym__newline_token2,
    ACTIONS(681), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9144] = 2,
    ACTIONS(687), 1,
      aux_sym__newline_token2,
    ACTIONS(685), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9171] = 2,
    ACTIONS(691), 1,
      aux_sym__newline_token2,
    ACTIONS(689), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9198] = 2,
    ACTIONS(695), 1,
      aux_sym__newline_token2,
    ACTIONS(693), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9225] = 2,
    ACTIONS(699), 1,
      aux_sym__newline_token2,
    ACTIONS(697), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9252] = 2,
    ACTIONS(703), 1,
      sym__digit,
    ACTIONS(701), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_null,
      anon_sym_POUNDnull,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [9279] = 2,
    ACTIONS(707), 1,
      aux_sym__newline_token2,
    ACTIONS(705), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9306] = 16,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(94), 1,
      sym_identifier,
    STATE(231), 1,
      sym_type,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [9361] = 2,
    ACTIONS(711), 1,
      aux_sym__newline_token2,
    ACTIONS(709), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9388] = 2,
    ACTIONS(715), 1,
      sym__digit,
    ACTIONS(713), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_null,
      anon_sym_POUNDnull,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [9415] = 2,
    ACTIONS(719), 1,
      aux_sym__newline_token2,
    ACTIONS(717), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9442] = 2,
    ACTIONS(723), 1,
      aux_sym__newline_token2,
    ACTIONS(721), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9469] = 2,
    ACTIONS(727), 1,
      aux_sym__newline_token2,
    ACTIONS(725), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9496] = 2,
    ACTIONS(731), 1,
      aux_sym__newline_token2,
    ACTIONS(729), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9523] = 2,
    ACTIONS(733), 1,
      aux_sym__newline_token2,
    ACTIONS(213), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9550] = 2,
    ACTIONS(737), 1,
      aux_sym__newline_token2,
    ACTIONS(735), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9577] = 2,
    ACTIONS(741), 1,
      aux_sym__newline_token2,
    ACTIONS(739), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9604] = 2,
    ACTIONS(745), 1,
      aux_sym__newline_token2,
    ACTIONS(743), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9631] = 2,
    ACTIONS(749), 1,
      aux_sym__newline_token2,
    ACTIONS(747), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9658] = 2,
    ACTIONS(753), 1,
      aux_sym__newline_token2,
    ACTIONS(751), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9685] = 2,
    ACTIONS(757), 1,
      aux_sym__newline_token2,
    ACTIONS(755), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9712] = 2,
    ACTIONS(761), 1,
      aux_sym__newline_token2,
    ACTIONS(759), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9739] = 2,
    ACTIONS(765), 1,
      aux_sym__newline_token2,
    ACTIONS(763), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9766] = 2,
    ACTIONS(769), 1,
      aux_sym__newline_token2,
    ACTIONS(767), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9793] = 2,
    ACTIONS(773), 1,
      sym__digit,
    ACTIONS(771), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      anon_sym_null,
      anon_sym_POUNDnull,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_0x,
      anon_sym_0o,
      anon_sym_0b,
      anon_sym_POUNDinf,
      anon_sym_POUND_DASHinf,
      anon_sym_POUNDnan,
      anon_sym_true,
      anon_sym_false,
      anon_sym_POUNDtrue,
      anon_sym_POUNDfalse,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [9820] = 2,
    ACTIONS(777), 1,
      aux_sym__newline_token2,
    ACTIONS(775), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9847] = 2,
    ACTIONS(781), 1,
      aux_sym__newline_token2,
    ACTIONS(779), 21,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      ts_builtin_sym_end,
      anon_sym_SLASH_DASH,
      anon_sym_RBRACE,
      sym__normal_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9874] = 4,
    ACTIONS(788), 1,
      aux_sym__newline_token2,
    STATE(212), 1,
      aux_sym__binary_repeat1,
    ACTIONS(785), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(783), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9904] = 4,
    ACTIONS(794), 1,
      aux_sym__newline_token2,
    STATE(217), 1,
      aux_sym__binary_repeat1,
    ACTIONS(792), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(790), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9934] = 5,
    ACTIONS(798), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      aux_sym__newline_token2,
    STATE(275), 1,
      sym__exponent,
    ACTIONS(800), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(796), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9966] = 5,
    ACTIONS(806), 1,
      anon_sym_DOT,
    ACTIONS(808), 1,
      aux_sym__newline_token2,
    STATE(273), 1,
      sym__exponent,
    ACTIONS(800), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(804), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [9998] = 4,
    ACTIONS(814), 1,
      aux_sym__newline_token2,
    STATE(212), 1,
      aux_sym__binary_repeat1,
    ACTIONS(812), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(810), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10028] = 4,
    ACTIONS(818), 1,
      aux_sym__newline_token2,
    STATE(212), 1,
      aux_sym__binary_repeat1,
    ACTIONS(812), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(816), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10058] = 4,
    ACTIONS(818), 1,
      aux_sym__newline_token2,
    STATE(216), 1,
      aux_sym__binary_repeat1,
    ACTIONS(820), 3,
      anon_sym__,
      anon_sym_0,
      anon_sym_1,
    ACTIONS(816), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10088] = 4,
    ACTIONS(826), 1,
      aux_sym__newline_token2,
    STATE(225), 1,
      aux_sym__octal_repeat1,
    ACTIONS(824), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(822), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10117] = 4,
    ACTIONS(830), 1,
      aux_sym__newline_token2,
    STATE(256), 1,
      sym__exponent,
    ACTIONS(800), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(828), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10146] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(93), 1,
      sym_identifier,
    STATE(232), 1,
      aux_sym_node_repeat1,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10195] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(95), 1,
      sym_identifier,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10244] = 4,
    ACTIONS(837), 1,
      aux_sym__newline_token2,
    STATE(223), 1,
      aux_sym__hex_repeat1,
    ACTIONS(834), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(832), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10273] = 4,
    ACTIONS(844), 1,
      aux_sym__newline_token2,
    STATE(224), 1,
      aux_sym__octal_repeat1,
    ACTIONS(841), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(839), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10302] = 4,
    ACTIONS(850), 1,
      aux_sym__newline_token2,
    STATE(224), 1,
      aux_sym__octal_repeat1,
    ACTIONS(848), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(846), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10331] = 4,
    ACTIONS(856), 1,
      aux_sym__newline_token2,
    STATE(223), 1,
      aux_sym__hex_repeat1,
    ACTIONS(854), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(852), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10360] = 4,
    ACTIONS(860), 1,
      aux_sym__newline_token2,
    STATE(223), 1,
      aux_sym__hex_repeat1,
    ACTIONS(854), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(858), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10389] = 4,
    ACTIONS(864), 1,
      aux_sym__newline_token2,
    STATE(224), 1,
      aux_sym__octal_repeat1,
    ACTIONS(848), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(862), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10418] = 4,
    ACTIONS(850), 1,
      aux_sym__newline_token2,
    STATE(228), 1,
      aux_sym__octal_repeat1,
    ACTIONS(866), 2,
      anon_sym__,
      aux_sym__octal_token1,
    ACTIONS(846), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10447] = 4,
    ACTIONS(870), 1,
      aux_sym__newline_token2,
    STATE(258), 1,
      sym__exponent,
    ACTIONS(800), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(868), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10476] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(104), 1,
      sym_identifier,
    STATE(222), 1,
      aux_sym_node_repeat1,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10525] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(103), 1,
      sym_identifier,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10574] = 8,
    ACTIONS(109), 1,
      aux_sym__newline_token2,
    ACTIONS(872), 1,
      anon_sym_BSLASH,
    STATE(233), 1,
      aux_sym_node_repeat1,
    STATE(267), 1,
      sym__escline,
    STATE(297), 1,
      sym__node_space,
    STATE(248), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(875), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(111), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [10611] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      aux_sym_node_repeat1,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(93), 1,
      sym_identifier,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10660] = 14,
    ACTIONS(7), 1,
      sym__normal_bare_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym__escline,
    STATE(29), 1,
      sym__node_space,
    STATE(98), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_node_repeat1,
    STATE(243), 1,
      sym__sign,
    STATE(247), 1,
      sym__escaped_string,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 2,
      sym_multi_line_string,
      sym__raw_string,
    STATE(18), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(268), 2,
      sym__bare_identifier,
      sym_string,
    ACTIONS(105), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [10709] = 4,
    ACTIONS(882), 1,
      aux_sym__newline_token2,
    STATE(226), 1,
      aux_sym__hex_repeat1,
    ACTIONS(880), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(878), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10738] = 4,
    ACTIONS(856), 1,
      aux_sym__newline_token2,
    STATE(227), 1,
      aux_sym__hex_repeat1,
    ACTIONS(884), 2,
      sym__hex_digit,
      anon_sym__,
    ACTIONS(852), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10767] = 4,
    ACTIONS(888), 1,
      sym__identifier_char,
    ACTIONS(890), 1,
      aux_sym__newline_token2,
    STATE(239), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(886), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10795] = 4,
    ACTIONS(894), 1,
      sym__identifier_char,
    ACTIONS(897), 1,
      aux_sym__newline_token2,
    STATE(239), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(892), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10823] = 4,
    ACTIONS(901), 1,
      sym__identifier_char,
    ACTIONS(903), 1,
      aux_sym__newline_token2,
    STATE(238), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(899), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10851] = 2,
    ACTIONS(907), 1,
      aux_sym__newline_token2,
    ACTIONS(905), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10874] = 4,
    ACTIONS(152), 1,
      aux_sym__newline_token2,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(909), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 12,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [10901] = 3,
    ACTIONS(914), 1,
      sym___identifier_char_no_digit,
    ACTIONS(916), 1,
      aux_sym__newline_token2,
    ACTIONS(912), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10926] = 4,
    ACTIONS(920), 1,
      anon_sym_EQ,
    ACTIONS(925), 1,
      aux_sym__newline_token2,
    ACTIONS(922), 4,
      sym_multi_line_comment,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
    ACTIONS(918), 12,
      sym__eof,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [10953] = 2,
    ACTIONS(929), 1,
      aux_sym__newline_token2,
    ACTIONS(927), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [10976] = 6,
    ACTIONS(934), 1,
      anon_sym_BSLASH,
    ACTIONS(938), 1,
      aux_sym__newline_token2,
    STATE(249), 1,
      sym__escline,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(941), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(931), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11007] = 2,
    ACTIONS(947), 1,
      aux_sym__newline_token2,
    ACTIONS(945), 17,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11030] = 6,
    ACTIONS(119), 1,
      aux_sym__newline_token2,
    ACTIONS(949), 1,
      anon_sym_BSLASH,
    STATE(249), 1,
      sym__escline,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(952), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 10,
      sym__eof,
      anon_sym_SEMI,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11061] = 4,
    ACTIONS(129), 1,
      aux_sym__newline_token2,
    STATE(271), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(955), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11087] = 2,
    ACTIONS(960), 1,
      aux_sym__newline_token2,
    ACTIONS(958), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11109] = 2,
    ACTIONS(964), 1,
      aux_sym__newline_token2,
    ACTIONS(962), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11131] = 2,
    ACTIONS(968), 1,
      aux_sym__newline_token2,
    ACTIONS(966), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11153] = 2,
    ACTIONS(507), 1,
      aux_sym__newline_token2,
    ACTIONS(502), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11175] = 2,
    ACTIONS(972), 1,
      aux_sym__newline_token2,
    ACTIONS(970), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11197] = 2,
    ACTIONS(976), 1,
      aux_sym__newline_token2,
    ACTIONS(974), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11219] = 2,
    ACTIONS(980), 1,
      aux_sym__newline_token2,
    ACTIONS(978), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11241] = 2,
    ACTIONS(984), 1,
      aux_sym__newline_token2,
    ACTIONS(982), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11263] = 2,
    ACTIONS(988), 1,
      aux_sym__newline_token2,
    ACTIONS(986), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11285] = 2,
    ACTIONS(992), 1,
      aux_sym__newline_token2,
    ACTIONS(990), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11307] = 2,
    ACTIONS(996), 1,
      aux_sym__newline_token2,
    ACTIONS(994), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11329] = 2,
    ACTIONS(1000), 1,
      aux_sym__newline_token2,
    ACTIONS(998), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11351] = 4,
    ACTIONS(1005), 1,
      aux_sym__newline_token2,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1008), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1002), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11377] = 2,
    ACTIONS(1014), 1,
      aux_sym__newline_token2,
    ACTIONS(1012), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11399] = 4,
    ACTIONS(129), 1,
      aux_sym__newline_token2,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1016), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11425] = 4,
    ACTIONS(1022), 1,
      aux_sym__newline_token2,
    STATE(262), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1025), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1019), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11451] = 2,
    ACTIONS(1031), 1,
      aux_sym__newline_token2,
    ACTIONS(1029), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11473] = 4,
    ACTIONS(119), 1,
      aux_sym__newline_token2,
    STATE(264), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1033), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11499] = 2,
    ACTIONS(1036), 1,
      aux_sym__newline_token2,
    ACTIONS(920), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11521] = 2,
    ACTIONS(1040), 1,
      aux_sym__newline_token2,
    ACTIONS(1038), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11543] = 4,
    ACTIONS(152), 1,
      aux_sym__newline_token2,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1042), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(154), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11569] = 4,
    ACTIONS(139), 1,
      aux_sym__newline_token2,
    STATE(270), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1045), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(141), 11,
      sym__eof,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      anon_sym_SLASH_SLASH,
  [11595] = 2,
    ACTIONS(1050), 1,
      aux_sym__newline_token2,
    ACTIONS(1048), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11617] = 2,
    ACTIONS(802), 1,
      aux_sym__newline_token2,
    ACTIONS(796), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11639] = 2,
    ACTIONS(925), 1,
      aux_sym__newline_token2,
    ACTIONS(918), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11661] = 2,
    ACTIONS(1054), 1,
      aux_sym__newline_token2,
    ACTIONS(1052), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11683] = 2,
    ACTIONS(1058), 1,
      aux_sym__newline_token2,
    ACTIONS(1056), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11705] = 2,
    ACTIONS(1062), 1,
      aux_sym__newline_token2,
    ACTIONS(1060), 16,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SLASH_DASH,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [11727] = 6,
    ACTIONS(1066), 1,
      aux_sym__newline_token2,
    ACTIONS(1070), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1068), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1064), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11756] = 6,
    ACTIONS(1074), 1,
      aux_sym__newline_token2,
    ACTIONS(1078), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(283), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1076), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1072), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11785] = 6,
    ACTIONS(1070), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1082), 1,
      aux_sym__newline_token2,
    STATE(105), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(278), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1084), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1080), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11814] = 6,
    ACTIONS(1088), 1,
      aux_sym__newline_token2,
    ACTIONS(1090), 1,
      anon_sym_SLASH_SLASH,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(300), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1068), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1086), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11843] = 6,
    ACTIONS(1094), 1,
      aux_sym__newline_token2,
    ACTIONS(1098), 1,
      anon_sym_SLASH_SLASH,
    STATE(286), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(342), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1096), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1092), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11872] = 6,
    ACTIONS(1078), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1102), 1,
      aux_sym__newline_token2,
    STATE(46), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1068), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1100), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11901] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1106), 1,
      aux_sym__newline_token2,
    STATE(28), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1068), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1104), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11930] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1110), 1,
      aux_sym__newline_token2,
    STATE(26), 2,
      sym__newline,
      sym_single_line_comment,
    STATE(284), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1112), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1108), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11959] = 6,
    ACTIONS(1098), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1116), 1,
      aux_sym__newline_token2,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(340), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1068), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1114), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [11988] = 6,
    ACTIONS(1090), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1120), 1,
      aux_sym__newline_token2,
    STATE(281), 2,
      sym__ws,
      aux_sym_node_repeat3,
    STATE(299), 2,
      sym__newline,
      sym_single_line_comment,
    ACTIONS(1122), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(1118), 7,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12017] = 2,
    ACTIONS(1126), 1,
      aux_sym__newline_token2,
    ACTIONS(1124), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12037] = 2,
    ACTIONS(1130), 1,
      aux_sym__newline_token2,
    ACTIONS(1128), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12057] = 2,
    ACTIONS(1134), 1,
      aux_sym__newline_token2,
    ACTIONS(1132), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12077] = 2,
    ACTIONS(1138), 1,
      aux_sym__newline_token2,
    ACTIONS(1136), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12097] = 2,
    ACTIONS(1142), 1,
      aux_sym__newline_token2,
    ACTIONS(1140), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12117] = 2,
    ACTIONS(1146), 1,
      aux_sym__newline_token2,
    ACTIONS(1144), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12137] = 2,
    ACTIONS(1150), 1,
      aux_sym__newline_token2,
    ACTIONS(1148), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12157] = 2,
    ACTIONS(1154), 1,
      aux_sym__newline_token2,
    ACTIONS(1152), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12177] = 2,
    ACTIONS(1158), 1,
      aux_sym__newline_token2,
    ACTIONS(1156), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12197] = 2,
    ACTIONS(174), 1,
      aux_sym__newline_token2,
    ACTIONS(176), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12217] = 2,
    ACTIONS(95), 1,
      aux_sym__newline_token2,
    ACTIONS(93), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12237] = 2,
    ACTIONS(164), 1,
      aux_sym__newline_token2,
    ACTIONS(166), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12257] = 2,
    ACTIONS(170), 1,
      aux_sym__newline_token2,
    ACTIONS(172), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12277] = 2,
    ACTIONS(91), 1,
      aux_sym__newline_token2,
    ACTIONS(89), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12297] = 2,
    ACTIONS(1162), 1,
      aux_sym__newline_token2,
    ACTIONS(1160), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12317] = 2,
    ACTIONS(1166), 1,
      aux_sym__newline_token2,
    ACTIONS(1164), 14,
      sym__eof,
      sym_multi_line_comment,
      anon_sym_SEMI,
      anon_sym_BSLASH,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
      sym__bom,
      sym__unicode_space,
      anon_sym_SLASH_SLASH,
  [12337] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1170), 1,
      aux_sym__newline_token2,
    ACTIONS(1172), 1,
      aux_sym_single_line_comment_token1,
    STATE(49), 1,
      sym__newline,
    STATE(312), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1168), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12363] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1176), 1,
      aux_sym__newline_token2,
    ACTIONS(1178), 1,
      aux_sym_single_line_comment_token1,
    STATE(298), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1174), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12389] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1182), 1,
      aux_sym__newline_token2,
    ACTIONS(1184), 1,
      aux_sym_single_line_comment_token1,
    STATE(12), 1,
      sym__newline,
    STATE(308), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1180), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12415] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1188), 1,
      aux_sym__newline_token2,
    ACTIONS(1190), 1,
      aux_sym_single_line_comment_token1,
    STATE(301), 1,
      sym__newline,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1186), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12441] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1190), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1194), 1,
      aux_sym__newline_token2,
    STATE(11), 1,
      sym__newline,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1192), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12467] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1198), 1,
      aux_sym__newline_token2,
    ACTIONS(1200), 1,
      aux_sym_single_line_comment_token1,
    STATE(111), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1196), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12493] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1190), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1204), 1,
      aux_sym__newline_token2,
    STATE(109), 1,
      sym__newline,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1202), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12519] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1208), 1,
      aux_sym__newline_token2,
    ACTIONS(1210), 1,
      aux_sym_single_line_comment_token1,
    STATE(313), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(343), 1,
      sym__newline,
    ACTIONS(1206), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12545] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1190), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1214), 1,
      aux_sym__newline_token2,
    STATE(45), 1,
      sym__newline,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1212), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12571] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1190), 1,
      aux_sym_single_line_comment_token1,
    ACTIONS(1218), 1,
      aux_sym__newline_token2,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    STATE(341), 1,
      sym__newline,
    ACTIONS(1216), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12597] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1222), 1,
      aux_sym__newline_token2,
    ACTIONS(1224), 1,
      aux_sym_single_line_comment_token1,
    STATE(314), 1,
      aux_sym_single_line_comment_repeat1,
    ACTIONS(1220), 8,
      sym__eof,
      aux_sym__newline_token1,
      aux_sym__newline_token3,
      aux_sym__newline_token4,
      aux_sym__newline_token5,
      aux_sym__newline_token6,
      aux_sym__newline_token7,
      aux_sym__newline_token8,
  [12620] = 7,
    ACTIONS(1227), 1,
      anon_sym_BSLASH,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(111), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
    ACTIONS(1230), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12647] = 7,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(1233), 1,
      sym___identifier_char_no_digit,
    ACTIONS(1235), 1,
      anon_sym_0x,
    ACTIONS(1237), 1,
      anon_sym_0o,
    ACTIONS(1239), 1,
      anon_sym_0b,
    STATE(214), 1,
      sym__integer,
    ACTIONS(912), 5,
      sym_multi_line_comment,
      anon_sym_EQ,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [12673] = 1,
    ACTIONS(701), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [12686] = 7,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12711] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12736] = 7,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12761] = 5,
    ACTIONS(1249), 1,
      anon_sym_BSLASH,
    STATE(334), 1,
      sym__escline,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(121), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
    ACTIONS(1252), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12782] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1255), 1,
      anon_sym_EQ,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12807] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12832] = 1,
    ACTIONS(713), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [12845] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12870] = 1,
    ACTIONS(771), 10,
      sym_multi_line_comment,
      sym_multi_line_string,
      sym__raw_string,
      sym__normal_bare_identifier,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [12883] = 7,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    STATE(320), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12908] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12933] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12958] = 7,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    STATE(325), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [12983] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1263), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13008] = 7,
    ACTIONS(1243), 1,
      anon_sym_BSLASH,
    ACTIONS(1265), 1,
      anon_sym_EQ,
    STATE(322), 1,
      aux_sym_node_repeat1,
    STATE(336), 1,
      sym__escline,
    STATE(344), 1,
      sym__node_space,
    STATE(321), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1245), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
  [13033] = 3,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1267), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(141), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13049] = 3,
    STATE(333), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1270), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13065] = 3,
    STATE(242), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1273), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(131), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13081] = 3,
    STATE(335), 2,
      sym__ws,
      aux_sym_node_repeat3,
    ACTIONS(1276), 3,
      sym_multi_line_comment,
      sym__bom,
      sym__unicode_space,
    ACTIONS(121), 4,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
  [13097] = 3,
    ACTIONS(1279), 1,
      sym__identifier_char,
    STATE(337), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(892), 6,
      sym_multi_line_comment,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13112] = 3,
    ACTIONS(1282), 1,
      sym__identifier_char,
    STATE(337), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(886), 6,
      sym_multi_line_comment,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13127] = 3,
    ACTIONS(1284), 1,
      sym__identifier_char,
    STATE(338), 1,
      aux_sym__bare_identifier_repeat1,
    ACTIONS(899), 6,
      sym_multi_line_comment,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13142] = 1,
    ACTIONS(172), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13152] = 1,
    ACTIONS(89), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13162] = 1,
    ACTIONS(166), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13172] = 1,
    ACTIONS(93), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13182] = 1,
    ACTIONS(176), 7,
      sym_multi_line_comment,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13192] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1286), 1,
      anon_sym_DQUOTE,
    ACTIONS(1288), 1,
      aux_sym__escaped_string_token1,
    STATE(345), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1291), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13209] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1296), 1,
      aux_sym__escaped_string_token1,
    STATE(350), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1298), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13226] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1296), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    STATE(349), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1298), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13243] = 2,
    ACTIONS(1233), 1,
      sym___identifier_char_no_digit,
    ACTIONS(912), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13254] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1296), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1302), 1,
      anon_sym_DQUOTE,
    STATE(345), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1298), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13271] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1296), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(345), 1,
      aux_sym__escaped_string_repeat1,
    ACTIONS(1298), 2,
      sym_escape,
      sym_escaped_whitespace,
  [13288] = 1,
    ACTIONS(920), 6,
      sym_multi_line_comment,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13297] = 5,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1306), 1,
      sym__digit,
    STATE(277), 1,
      sym__integer,
    STATE(359), 1,
      sym__sign,
    ACTIONS(1308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [13314] = 6,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(37), 1,
      sym__digit,
    ACTIONS(1235), 1,
      anon_sym_0x,
    ACTIONS(1237), 1,
      anon_sym_0o,
    ACTIONS(1239), 1,
      anon_sym_0b,
    STATE(214), 1,
      sym__integer,
  [13333] = 1,
    ACTIONS(945), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13341] = 1,
    ACTIONS(905), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13349] = 1,
    ACTIONS(1310), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13357] = 1,
    ACTIONS(927), 5,
      sym_multi_line_comment,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__bom,
      sym__unicode_space,
  [13365] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1314), 1,
      aux_sym__escaped_string_token1,
    ACTIONS(1312), 3,
      anon_sym_DQUOTE,
      sym_escape,
      sym_escaped_whitespace,
  [13377] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1306), 1,
      sym__digit,
    STATE(257), 1,
      sym__integer,
  [13387] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1306), 1,
      sym__digit,
    STATE(230), 1,
      sym__integer,
  [13397] = 3,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1306), 1,
      sym__digit,
    STATE(220), 1,
      sym__integer,
  [13407] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1316), 2,
      anon_sym_0,
      anon_sym_1,
  [13415] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1318), 2,
      anon_sym_0,
      anon_sym_1,
  [13423] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1320), 1,
      aux_sym__octal_token1,
  [13430] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1322), 1,
      ts_builtin_sym_end,
  [13437] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1324), 1,
      aux_sym__octal_token1,
  [13444] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1326), 1,
      sym__hex_digit,
  [13451] = 2,
    ACTIONS(3), 1,
      sym_multi_line_comment,
    ACTIONS(1328), 1,
      sym__hex_digit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 65,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 486,
  [SMALL_STATE(18)] = 556,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 738,
  [SMALL_STATE(22)] = 797,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 971,
  [SMALL_STATE(25)] = 1030,
  [SMALL_STATE(26)] = 1141,
  [SMALL_STATE(27)] = 1194,
  [SMALL_STATE(28)] = 1305,
  [SMALL_STATE(29)] = 1358,
  [SMALL_STATE(30)] = 1411,
  [SMALL_STATE(31)] = 1519,
  [SMALL_STATE(32)] = 1627,
  [SMALL_STATE(33)] = 1686,
  [SMALL_STATE(34)] = 1779,
  [SMALL_STATE(35)] = 1872,
  [SMALL_STATE(36)] = 1965,
  [SMALL_STATE(37)] = 2058,
  [SMALL_STATE(38)] = 2111,
  [SMALL_STATE(39)] = 2159,
  [SMALL_STATE(40)] = 2243,
  [SMALL_STATE(41)] = 2291,
  [SMALL_STATE(42)] = 2339,
  [SMALL_STATE(43)] = 2387,
  [SMALL_STATE(44)] = 2435,
  [SMALL_STATE(45)] = 2519,
  [SMALL_STATE(46)] = 2561,
  [SMALL_STATE(47)] = 2603,
  [SMALL_STATE(48)] = 2645,
  [SMALL_STATE(49)] = 2687,
  [SMALL_STATE(50)] = 2729,
  [SMALL_STATE(51)] = 2799,
  [SMALL_STATE(52)] = 2868,
  [SMALL_STATE(53)] = 2937,
  [SMALL_STATE(54)] = 3006,
  [SMALL_STATE(55)] = 3075,
  [SMALL_STATE(56)] = 3144,
  [SMALL_STATE(57)] = 3213,
  [SMALL_STATE(58)] = 3282,
  [SMALL_STATE(59)] = 3351,
  [SMALL_STATE(60)] = 3420,
  [SMALL_STATE(61)] = 3489,
  [SMALL_STATE(62)] = 3558,
  [SMALL_STATE(63)] = 3627,
  [SMALL_STATE(64)] = 3696,
  [SMALL_STATE(65)] = 3765,
  [SMALL_STATE(66)] = 3833,
  [SMALL_STATE(67)] = 3901,
  [SMALL_STATE(68)] = 3969,
  [SMALL_STATE(69)] = 4037,
  [SMALL_STATE(70)] = 4105,
  [SMALL_STATE(71)] = 4173,
  [SMALL_STATE(72)] = 4241,
  [SMALL_STATE(73)] = 4309,
  [SMALL_STATE(74)] = 4377,
  [SMALL_STATE(75)] = 4445,
  [SMALL_STATE(76)] = 4513,
  [SMALL_STATE(77)] = 4581,
  [SMALL_STATE(78)] = 4649,
  [SMALL_STATE(79)] = 4717,
  [SMALL_STATE(80)] = 4785,
  [SMALL_STATE(81)] = 4853,
  [SMALL_STATE(82)] = 4921,
  [SMALL_STATE(83)] = 4986,
  [SMALL_STATE(84)] = 5034,
  [SMALL_STATE(85)] = 5076,
  [SMALL_STATE(86)] = 5113,
  [SMALL_STATE(87)] = 5150,
  [SMALL_STATE(88)] = 5187,
  [SMALL_STATE(89)] = 5224,
  [SMALL_STATE(90)] = 5261,
  [SMALL_STATE(91)] = 5317,
  [SMALL_STATE(92)] = 5373,
  [SMALL_STATE(93)] = 5429,
  [SMALL_STATE(94)] = 5485,
  [SMALL_STATE(95)] = 5541,
  [SMALL_STATE(96)] = 5597,
  [SMALL_STATE(97)] = 5653,
  [SMALL_STATE(98)] = 5709,
  [SMALL_STATE(99)] = 5765,
  [SMALL_STATE(100)] = 5803,
  [SMALL_STATE(101)] = 5859,
  [SMALL_STATE(102)] = 5915,
  [SMALL_STATE(103)] = 5971,
  [SMALL_STATE(104)] = 6027,
  [SMALL_STATE(105)] = 6083,
  [SMALL_STATE(106)] = 6114,
  [SMALL_STATE(107)] = 6153,
  [SMALL_STATE(108)] = 6184,
  [SMALL_STATE(109)] = 6215,
  [SMALL_STATE(110)] = 6246,
  [SMALL_STATE(111)] = 6285,
  [SMALL_STATE(112)] = 6316,
  [SMALL_STATE(113)] = 6355,
  [SMALL_STATE(114)] = 6394,
  [SMALL_STATE(115)] = 6438,
  [SMALL_STATE(116)] = 6482,
  [SMALL_STATE(117)] = 6526,
  [SMALL_STATE(118)] = 6570,
  [SMALL_STATE(119)] = 6614,
  [SMALL_STATE(120)] = 6658,
  [SMALL_STATE(121)] = 6702,
  [SMALL_STATE(122)] = 6746,
  [SMALL_STATE(123)] = 6790,
  [SMALL_STATE(124)] = 6834,
  [SMALL_STATE(125)] = 6878,
  [SMALL_STATE(126)] = 6922,
  [SMALL_STATE(127)] = 6966,
  [SMALL_STATE(128)] = 7010,
  [SMALL_STATE(129)] = 7054,
  [SMALL_STATE(130)] = 7086,
  [SMALL_STATE(131)] = 7130,
  [SMALL_STATE(132)] = 7174,
  [SMALL_STATE(133)] = 7218,
  [SMALL_STATE(134)] = 7262,
  [SMALL_STATE(135)] = 7306,
  [SMALL_STATE(136)] = 7350,
  [SMALL_STATE(137)] = 7394,
  [SMALL_STATE(138)] = 7426,
  [SMALL_STATE(139)] = 7470,
  [SMALL_STATE(140)] = 7512,
  [SMALL_STATE(141)] = 7556,
  [SMALL_STATE(142)] = 7600,
  [SMALL_STATE(143)] = 7644,
  [SMALL_STATE(144)] = 7688,
  [SMALL_STATE(145)] = 7732,
  [SMALL_STATE(146)] = 7776,
  [SMALL_STATE(147)] = 7820,
  [SMALL_STATE(148)] = 7864,
  [SMALL_STATE(149)] = 7908,
  [SMALL_STATE(150)] = 7952,
  [SMALL_STATE(151)] = 7996,
  [SMALL_STATE(152)] = 8040,
  [SMALL_STATE(153)] = 8084,
  [SMALL_STATE(154)] = 8116,
  [SMALL_STATE(155)] = 8160,
  [SMALL_STATE(156)] = 8204,
  [SMALL_STATE(157)] = 8248,
  [SMALL_STATE(158)] = 8292,
  [SMALL_STATE(159)] = 8336,
  [SMALL_STATE(160)] = 8380,
  [SMALL_STATE(161)] = 8424,
  [SMALL_STATE(162)] = 8468,
  [SMALL_STATE(163)] = 8495,
  [SMALL_STATE(164)] = 8522,
  [SMALL_STATE(165)] = 8549,
  [SMALL_STATE(166)] = 8604,
  [SMALL_STATE(167)] = 8631,
  [SMALL_STATE(168)] = 8658,
  [SMALL_STATE(169)] = 8685,
  [SMALL_STATE(170)] = 8712,
  [SMALL_STATE(171)] = 8739,
  [SMALL_STATE(172)] = 8766,
  [SMALL_STATE(173)] = 8793,
  [SMALL_STATE(174)] = 8820,
  [SMALL_STATE(175)] = 8847,
  [SMALL_STATE(176)] = 8874,
  [SMALL_STATE(177)] = 8901,
  [SMALL_STATE(178)] = 8928,
  [SMALL_STATE(179)] = 8955,
  [SMALL_STATE(180)] = 8982,
  [SMALL_STATE(181)] = 9009,
  [SMALL_STATE(182)] = 9036,
  [SMALL_STATE(183)] = 9063,
  [SMALL_STATE(184)] = 9090,
  [SMALL_STATE(185)] = 9117,
  [SMALL_STATE(186)] = 9144,
  [SMALL_STATE(187)] = 9171,
  [SMALL_STATE(188)] = 9198,
  [SMALL_STATE(189)] = 9225,
  [SMALL_STATE(190)] = 9252,
  [SMALL_STATE(191)] = 9279,
  [SMALL_STATE(192)] = 9306,
  [SMALL_STATE(193)] = 9361,
  [SMALL_STATE(194)] = 9388,
  [SMALL_STATE(195)] = 9415,
  [SMALL_STATE(196)] = 9442,
  [SMALL_STATE(197)] = 9469,
  [SMALL_STATE(198)] = 9496,
  [SMALL_STATE(199)] = 9523,
  [SMALL_STATE(200)] = 9550,
  [SMALL_STATE(201)] = 9577,
  [SMALL_STATE(202)] = 9604,
  [SMALL_STATE(203)] = 9631,
  [SMALL_STATE(204)] = 9658,
  [SMALL_STATE(205)] = 9685,
  [SMALL_STATE(206)] = 9712,
  [SMALL_STATE(207)] = 9739,
  [SMALL_STATE(208)] = 9766,
  [SMALL_STATE(209)] = 9793,
  [SMALL_STATE(210)] = 9820,
  [SMALL_STATE(211)] = 9847,
  [SMALL_STATE(212)] = 9874,
  [SMALL_STATE(213)] = 9904,
  [SMALL_STATE(214)] = 9934,
  [SMALL_STATE(215)] = 9966,
  [SMALL_STATE(216)] = 9998,
  [SMALL_STATE(217)] = 10028,
  [SMALL_STATE(218)] = 10058,
  [SMALL_STATE(219)] = 10088,
  [SMALL_STATE(220)] = 10117,
  [SMALL_STATE(221)] = 10146,
  [SMALL_STATE(222)] = 10195,
  [SMALL_STATE(223)] = 10244,
  [SMALL_STATE(224)] = 10273,
  [SMALL_STATE(225)] = 10302,
  [SMALL_STATE(226)] = 10331,
  [SMALL_STATE(227)] = 10360,
  [SMALL_STATE(228)] = 10389,
  [SMALL_STATE(229)] = 10418,
  [SMALL_STATE(230)] = 10447,
  [SMALL_STATE(231)] = 10476,
  [SMALL_STATE(232)] = 10525,
  [SMALL_STATE(233)] = 10574,
  [SMALL_STATE(234)] = 10611,
  [SMALL_STATE(235)] = 10660,
  [SMALL_STATE(236)] = 10709,
  [SMALL_STATE(237)] = 10738,
  [SMALL_STATE(238)] = 10767,
  [SMALL_STATE(239)] = 10795,
  [SMALL_STATE(240)] = 10823,
  [SMALL_STATE(241)] = 10851,
  [SMALL_STATE(242)] = 10874,
  [SMALL_STATE(243)] = 10901,
  [SMALL_STATE(244)] = 10926,
  [SMALL_STATE(245)] = 10953,
  [SMALL_STATE(246)] = 10976,
  [SMALL_STATE(247)] = 11007,
  [SMALL_STATE(248)] = 11030,
  [SMALL_STATE(249)] = 11061,
  [SMALL_STATE(250)] = 11087,
  [SMALL_STATE(251)] = 11109,
  [SMALL_STATE(252)] = 11131,
  [SMALL_STATE(253)] = 11153,
  [SMALL_STATE(254)] = 11175,
  [SMALL_STATE(255)] = 11197,
  [SMALL_STATE(256)] = 11219,
  [SMALL_STATE(257)] = 11241,
  [SMALL_STATE(258)] = 11263,
  [SMALL_STATE(259)] = 11285,
  [SMALL_STATE(260)] = 11307,
  [SMALL_STATE(261)] = 11329,
  [SMALL_STATE(262)] = 11351,
  [SMALL_STATE(263)] = 11377,
  [SMALL_STATE(264)] = 11399,
  [SMALL_STATE(265)] = 11425,
  [SMALL_STATE(266)] = 11451,
  [SMALL_STATE(267)] = 11473,
  [SMALL_STATE(268)] = 11499,
  [SMALL_STATE(269)] = 11521,
  [SMALL_STATE(270)] = 11543,
  [SMALL_STATE(271)] = 11569,
  [SMALL_STATE(272)] = 11595,
  [SMALL_STATE(273)] = 11617,
  [SMALL_STATE(274)] = 11639,
  [SMALL_STATE(275)] = 11661,
  [SMALL_STATE(276)] = 11683,
  [SMALL_STATE(277)] = 11705,
  [SMALL_STATE(278)] = 11727,
  [SMALL_STATE(279)] = 11756,
  [SMALL_STATE(280)] = 11785,
  [SMALL_STATE(281)] = 11814,
  [SMALL_STATE(282)] = 11843,
  [SMALL_STATE(283)] = 11872,
  [SMALL_STATE(284)] = 11901,
  [SMALL_STATE(285)] = 11930,
  [SMALL_STATE(286)] = 11959,
  [SMALL_STATE(287)] = 11988,
  [SMALL_STATE(288)] = 12017,
  [SMALL_STATE(289)] = 12037,
  [SMALL_STATE(290)] = 12057,
  [SMALL_STATE(291)] = 12077,
  [SMALL_STATE(292)] = 12097,
  [SMALL_STATE(293)] = 12117,
  [SMALL_STATE(294)] = 12137,
  [SMALL_STATE(295)] = 12157,
  [SMALL_STATE(296)] = 12177,
  [SMALL_STATE(297)] = 12197,
  [SMALL_STATE(298)] = 12217,
  [SMALL_STATE(299)] = 12237,
  [SMALL_STATE(300)] = 12257,
  [SMALL_STATE(301)] = 12277,
  [SMALL_STATE(302)] = 12297,
  [SMALL_STATE(303)] = 12317,
  [SMALL_STATE(304)] = 12337,
  [SMALL_STATE(305)] = 12363,
  [SMALL_STATE(306)] = 12389,
  [SMALL_STATE(307)] = 12415,
  [SMALL_STATE(308)] = 12441,
  [SMALL_STATE(309)] = 12467,
  [SMALL_STATE(310)] = 12493,
  [SMALL_STATE(311)] = 12519,
  [SMALL_STATE(312)] = 12545,
  [SMALL_STATE(313)] = 12571,
  [SMALL_STATE(314)] = 12597,
  [SMALL_STATE(315)] = 12620,
  [SMALL_STATE(316)] = 12647,
  [SMALL_STATE(317)] = 12673,
  [SMALL_STATE(318)] = 12686,
  [SMALL_STATE(319)] = 12711,
  [SMALL_STATE(320)] = 12736,
  [SMALL_STATE(321)] = 12761,
  [SMALL_STATE(322)] = 12782,
  [SMALL_STATE(323)] = 12807,
  [SMALL_STATE(324)] = 12832,
  [SMALL_STATE(325)] = 12845,
  [SMALL_STATE(326)] = 12870,
  [SMALL_STATE(327)] = 12883,
  [SMALL_STATE(328)] = 12908,
  [SMALL_STATE(329)] = 12933,
  [SMALL_STATE(330)] = 12958,
  [SMALL_STATE(331)] = 12983,
  [SMALL_STATE(332)] = 13008,
  [SMALL_STATE(333)] = 13033,
  [SMALL_STATE(334)] = 13049,
  [SMALL_STATE(335)] = 13065,
  [SMALL_STATE(336)] = 13081,
  [SMALL_STATE(337)] = 13097,
  [SMALL_STATE(338)] = 13112,
  [SMALL_STATE(339)] = 13127,
  [SMALL_STATE(340)] = 13142,
  [SMALL_STATE(341)] = 13152,
  [SMALL_STATE(342)] = 13162,
  [SMALL_STATE(343)] = 13172,
  [SMALL_STATE(344)] = 13182,
  [SMALL_STATE(345)] = 13192,
  [SMALL_STATE(346)] = 13209,
  [SMALL_STATE(347)] = 13226,
  [SMALL_STATE(348)] = 13243,
  [SMALL_STATE(349)] = 13254,
  [SMALL_STATE(350)] = 13271,
  [SMALL_STATE(351)] = 13288,
  [SMALL_STATE(352)] = 13297,
  [SMALL_STATE(353)] = 13314,
  [SMALL_STATE(354)] = 13333,
  [SMALL_STATE(355)] = 13341,
  [SMALL_STATE(356)] = 13349,
  [SMALL_STATE(357)] = 13357,
  [SMALL_STATE(358)] = 13365,
  [SMALL_STATE(359)] = 13377,
  [SMALL_STATE(360)] = 13387,
  [SMALL_STATE(361)] = 13397,
  [SMALL_STATE(362)] = 13407,
  [SMALL_STATE(363)] = 13415,
  [SMALL_STATE(364)] = 13423,
  [SMALL_STATE(365)] = 13430,
  [SMALL_STATE(366)] = 13437,
  [SMALL_STATE(367)] = 13444,
  [SMALL_STATE(368)] = 13451,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(285),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(18),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 1),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(285),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_space, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_space, 3),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat3, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(23),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escline, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escline, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 1),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(279),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(279),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(38),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(38),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(42),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(38),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(38),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(268),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(165),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(15),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(347),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(243),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(82),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(82),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(306),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(247),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(280),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(84),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(280),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(86),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(86),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(86),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(85),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(86),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(306),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(294),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(296),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_document, 2), REDUCE(aux_sym_document_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT(302),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(280),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat2, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(84),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__integer_repeat1, 2), SHIFT_REPEAT(153),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__integer_repeat1, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 17),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 17),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 16),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 16),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 12),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 12),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 8),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 8),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 14),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 14),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 7),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 11),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 7),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 4),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 11),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 11),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 14),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 14),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 11, .production_id = 18),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 11, .production_id = 18),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 16),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 16),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 18),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 18),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 12),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 12),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 17),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 17),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 10, .production_id = 16),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 10, .production_id = 16),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 15),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 15),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 18),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 18),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 7),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 7),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 8),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 8),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 11),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 11),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 15),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 15),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 7, .production_id = 15),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 7, .production_id = 15),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 4),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 8),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 8),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 9, .production_id = 14),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 9, .production_id = 14),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 12),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 12),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 4),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 4),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 4),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 8, .production_id = 17),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 8, .production_id = 17),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__binary_repeat1, 2), SHIFT_REPEAT(212),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__binary_repeat1, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 4),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 13),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hex_repeat1, 2), SHIFT_REPEAT(223),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hex_repeat1, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__octal_repeat1, 2), SHIFT_REPEAT(224),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__octal_repeat1, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 4),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__octal, 4),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__octal, 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3, .production_id = 10),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(287),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(248),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(239),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bare_identifier_repeat1, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(242),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bare_identifier, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bare_identifier, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identifier, 1), REDUCE(sym_value, 1),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3, .production_id = 1),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [934] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(287),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2),
  [941] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(aux_sym_node_repeat3, 2), SHIFT(270),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [949] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(287),
  [952] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(270),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(271),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 2, .production_id = 6),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field, 1),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_field, 1),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_field, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 5),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 5),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 5, .production_id = 13),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 3),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 4, .production_id = 10),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 4),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 4),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_number, 1),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_number, 1),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [1005] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3),
  [1008] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 2), REDUCE(sym__node_space, 3), SHIFT(270),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_field_comment, 3, .production_id = 9),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(270),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2),
  [1025] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__node_space, 1), REDUCE(sym__node_space, 2), SHIFT(262),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(264),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat3, 2), SHIFT_REPEAT(270),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(270),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal, 3),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exponent, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exponent, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 7, .production_id = 5),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4, .production_id = 5),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 8, .production_id = 5),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 4),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 4),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 2),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 2),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [1158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 6, .production_id = 5),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 5, .production_id = 5),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_children, 3, .production_id = 5),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_line_comment_repeat1, 2),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_line_comment_repeat1, 2), SHIFT_REPEAT(314),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(282),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(321),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(282),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(242),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 3), SHIFT(242),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(333),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 2), SHIFT(242),
  [1276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__node_space, 1), SHIFT(335),
  [1279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bare_identifier_repeat1, 2), SHIFT_REPEAT(337),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [1288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(358),
  [1291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(358),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_type, 1),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 1),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_kdl_external_scanner_create(void);
void tree_sitter_kdl_external_scanner_destroy(void *);
bool tree_sitter_kdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_kdl_external_scanner_serialize(void *, char *);
void tree_sitter_kdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__normal_bare_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_kdl_external_scanner_create,
      tree_sitter_kdl_external_scanner_destroy,
      tree_sitter_kdl_external_scanner_scan,
      tree_sitter_kdl_external_scanner_serialize,
      tree_sitter_kdl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
