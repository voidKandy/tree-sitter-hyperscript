package tree_sitter__hyperscript_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-_hyperscript"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter__hyperscript.Language())
	if language == nil {
		t.Errorf("Error loading Hyperscript grammar")
	}
}
