#include "tree_sitter/parser.h"

enum { _EOF, MULTI_LINE_COMMENT, MULTI_LINE_STRING, _RAW_STRING };

void *tree_sitter_kdl_external_scanner_create() { return NULL; }

void tree_sitter_kdl_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_kdl_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_kdl_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_multiline_body(TSLexer *lexer, unsigned num_hashes);

// According to the KDL v2 spec: https://kdl.dev/spec/#name-whitespace
static bool is_unicode_space(int32_t c) {
    switch (c) {
        case '\t':
        case ' ':
        case 0x00A0:
        case 0x1680:
        case 0x2000:
        case 0x2001:
        case 0x2002:
        case 0x2003:
        case 0x2004:
        case 0x2005:
        case 0x2006:
        case 0x2007:
        case 0x2008:
        case 0x2009:
        case 0x200A:
        case 0x202F:
        case 0x205F:
        case 0x3000:
            return true;
        default:
            return false;
    }
}

static bool is_newline_start(int32_t c) {
    return c == '\r' || c == '\n' || c == 0x0085 || c == 0x000B || c == 0x000C || c == 0x2028 || c == 0x2029;
}

static void advance_newline(TSLexer *lexer) {
    if (lexer->lookahead == '\r') {
        advance(lexer);
        if (lexer->lookahead == '\n') {
            advance(lexer);
        }
    } else {
        advance(lexer);
    }
}

static bool consume_closing_hashes(TSLexer *lexer, unsigned num_hashes) {
    for (unsigned i = 0; i < num_hashes; i++) {
        if (lexer->lookahead != '#') {
            return false;
        }
        advance(lexer);
    }

    return true;
}

// Consume exactly three consecutive quote characters.
// This is used for KDL v2 multiline string delimiters such as:
//   """
//   #""" ... """#
//   ##""" ... """##
static bool consume_triple_quote(TSLexer *lexer) {
    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);

    return true;
}


// After reading the first quote of a v2 raw string opener, check if the
// following input makes it a raw multiline string (`#"""\n` / `##"""\n`).
// If it does, consume the opening newline and start scanning the multiline body.
static bool try_scan_v2_raw_multiline_string(TSLexer *lexer, unsigned num_hashes, unsigned *consumed_quotes) {
    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);
    *consumed_quotes = 1;

    if (lexer->lookahead != '"') {
        return false;
    }
    advance(lexer);
    *consumed_quotes = 2;

    if (!is_newline_start(lexer->lookahead)) {
        return false;
    }

    advance_newline(lexer);
    if (!scan_multiline_body(lexer, num_hashes)) {
        return false;
    }

    lexer->result_symbol = _RAW_STRING;
    return true;
}

static bool scan_multiline_body(TSLexer *lexer, unsigned num_hashes) {
    bool at_line_start = true;

    for (;;) {
        if (lexer->eof(lexer)) {
            return false;
        }

        if (at_line_start) {
            // In KDL v2, a multiline string closes near the start of a line:
            // indentation is allowed, then the closing """ or """### delimiter.
            while (is_unicode_space(lexer->lookahead)) {
                advance(lexer);
            }

            if (consume_triple_quote(lexer)) {
                return consume_closing_hashes(lexer, num_hashes);
            }
        }

        if (is_newline_start(lexer->lookahead)) {
            advance_newline(lexer);
            at_line_start = true;
            continue;
        }

        at_line_start = false;
        advance(lexer);
    }
}

static bool scan_multiline_string(TSLexer *lexer, unsigned num_hashes, int result_symbol) {
    if (!consume_triple_quote(lexer)) return false;

    if (!is_newline_start(lexer->lookahead)) {
        return false;
    }

    advance_newline(lexer);
    if (!scan_multiline_body(lexer, num_hashes)) {
        return false;
    }

    lexer->result_symbol = result_symbol;
    return true;
}

static bool scan_single_line_raw_string(TSLexer *lexer, unsigned num_hashes) {
    for (;;) {
        if (lexer->eof(lexer)) {
            return false;
        }

        int32_t c = lexer->lookahead;
        advance(lexer);

        if (c != '"') {
            continue;
        }

        // After the closing quote, the number of `#` characters must match the opener.
        if (consume_closing_hashes(lexer, num_hashes)) {
            lexer->result_symbol = _RAW_STRING;
            return true;
        }
    }
}

static bool scan_v2_raw_string(TSLexer *lexer) {
    unsigned num_hashes = 0;
    while (lexer->lookahead == '#') {
        num_hashes += 1;
        advance(lexer);
    }

    if (num_hashes == 0 || lexer->lookahead != '"') {
        return false;
    }

    advance(lexer);

    unsigned consumed_quotes = 0;

    if (try_scan_v2_raw_multiline_string(lexer, num_hashes, &consumed_quotes)) {
        return true;
    }

    if (consumed_quotes > 0) {
        // This handles the shortest legal forms such as #""#.
        // We already consumed the first opening quote, so here we check whether
        // the next one or two quotes were actually the empty-string closing delimiter.
        if (consume_closing_hashes(lexer, num_hashes)) {
            lexer->result_symbol = _RAW_STRING;
            return true;
        }
    }

    return scan_single_line_raw_string(lexer, num_hashes);
}

static bool scan_v1_raw_string(TSLexer *lexer) {
    if (lexer->lookahead != 'r') {
        return false;
    }
    advance(lexer);

    unsigned num_hashes = 0;
    while (lexer->lookahead == '#') {
        num_hashes += 1;
        advance(lexer);
    }

    if (lexer->lookahead != '"') {
        return false;
    }

    advance(lexer);
    return scan_single_line_raw_string(lexer, num_hashes);
}

bool tree_sitter_kdl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[_EOF] && lexer->lookahead == 0) {
        lexer->result_symbol = _EOF;
        advance(lexer);
        return true;
    }

    if (valid_symbols[MULTI_LINE_STRING] && lexer->lookahead == '"') {
        if (scan_multiline_string(lexer, 0, MULTI_LINE_STRING)) {
            return true;
        }
    }

    if (valid_symbols[_RAW_STRING]) {
        // Support both raw-string families at once:
        //   v1: r#"..."#
        //   v2: #"..."#
        if (lexer->lookahead == 'r' && scan_v1_raw_string(lexer)) {
            return true;
        }
        if (lexer->lookahead == '#' && scan_v2_raw_string(lexer)) {
            return true;
        }
    }

    if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead != '*')
            return false;
        advance(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
                case '\0':
                    return false;
                case '*':
                    advance(lexer);
                    after_star = true;
                    break;
                case '/':
                    if (after_star) {
                        advance(lexer);
                        after_star = false;
                        nesting_depth--;
                        if (nesting_depth == 0) {
                            lexer->result_symbol = MULTI_LINE_COMMENT;
                            return true;
                        }
                    } else {
                        advance(lexer);
                        after_star = false;
                        if (lexer->lookahead == '*') {
                            nesting_depth++;
                            advance(lexer);
                        }
                    }
                    break;
                default:
                    advance(lexer);
                    after_star = false;
                    break;
            }
        }
    }

    return false;
}
