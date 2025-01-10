LIBEXT ?= dylib
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
	$(CC) -fPIC -c -Isrc $<

$(TARGET): parser.o
	$(CC) -fPIC -shared *.o -o $@
