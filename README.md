# Tree Sitter RelaxNG Compact

Based on https://relaxng.org/compact.html with
the attempt to make the grammar more readable when
avoid ambiguity.

# Installation

This requires the Emacs 29 builtin `treesit.el` support.
Compile and install the `libtree-sitter-rnc.$(LIBEXT)`
to `treesit` search path, e.g. `~/.emacs.d/tree-sitter/`.

```
$ cc -fPIC -c -Isrc src/parser.c
$ cc -fPIC -shared parser.o -o libtree-sitter-rnc.so
```

Copy `emacs/rnc-ts-mode.el` to Emacs load path.

# Copying

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.