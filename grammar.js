// Copyright 2024 The tree-sitter-goasm Authors
// SPDX-License-Identifier: Apache-2.0

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'goasm',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => 'hello'
  }
});
