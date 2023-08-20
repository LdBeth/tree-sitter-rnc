TREE_CLI := $(HOME)/.cargo/bin/tree-sitter-cli
EXAMPLE := examples/test.rnc

all: generate test

test:
	$(TREE_CLI) parse $(EXAMPLE)

generate:
	$(TREE_CLI) generate
