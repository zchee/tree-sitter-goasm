package tree_sitter_goasm_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_goasm "github.com/tree-sitter/tree-sitter-goasm/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_goasm.Language())
	if language == nil {
		t.Errorf("Error loading Go Assembly grammar")
	}
}
