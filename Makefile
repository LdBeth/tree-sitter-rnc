TREE_CLI := tree-sitter
LIBEXT := dylib
TARGET := libtree-sitter-rnc.$(LIBEXT)

all: $(TARGET)

test:
	$(TREE_CLI) test
.PHONY: test

generate:
	$(TREE_CLI) generate

parser.o: src/parser.c
	cc -fPIC -c -Isrc $<

$(TARGET): parser.o
	cc -fPIC -shared *.o -o $@
