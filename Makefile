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
	$(CC) -fPIC -c -Isrc $<

$(TARGET): parser.o
	$(CC) -fPIC -shared *.o -o $@
