/**
 * @file Goasm grammar for tree-sitter
 * @author zchee <zchee.io@gmail.com>
 * @license Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

export default grammar({
  name: "goasm",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
