TREE_CLI := tree-sitter
EXAMPLE := examples/test.rnc
LIBEXT := dylib
TARGET := libtree-sitter-rnc.$(LIBEXT)

all: $(TARGET)

test:
	$(TREE_CLI) parse $(EXAMPLE)

generate:
	$(TREE_CLI) generate

parser.o: src/parser.c
	cc -fPIC -c -Isrc $<

$(TARGET): parser.o
	cc -fPIC -shared *.o -o $@
