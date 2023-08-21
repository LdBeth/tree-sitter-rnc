/* Tree Sitter Parser for RelaxNG Compact
 *
 * Copyright 2023 LdBeth
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */
const NCNAME = /[_0-9A-Za-z][_0-9A-Za-z\-\.]*/;

module.exports = grammar({
  name: 'rnc',
  extras: $ => [
    /\s/,
    $.comment
  ],
  word: $ => $._NCName,
  rules: {
    source_file: $ => seq(
      repeat($.declare),
      choice($._innerPattern, repeat($._grammarContent))
    ),

    declare: $ => choice(
      seq('namespace',
          field('name', $.identifier),
          '=',
          field('uri', $._namespaceURILiteral)),
      seq('default', 'namespace',
          optional(field('name', $.identifier)),
          '=',
          field('uri', $._namespaceURILiteral)),
      seq('datatypes', field('name', $.identifier),
          '=', field('uri', $.literal))
    ),

    _grammarContent: $ => choice(
      $.annotation_element,
      choice(
        $.define,
        $.grammar_div,
        $.include)
    ),

    grammar_div: $ => seq(
      optional($.annotation),
      'div', $.grammar_block),

    grammar_block: $ => seq('{', repeat($._grammarContent), '}'),

    include: $ => seq(
      optional($.annotation),
      'include',
      field('uri', $.literal),
      optional($._inherit),
      $.include_block
    ),

    include_block: $ => seq(
      '{',
      choice($.define, $.include_div),
      '}'),

    include_div: $ => seq(optional($.annotation), 'div', $.include_block),

    define: $ => seq(
      optional($.annotation),
      field('name', $.identifier),
      choice('=', '|=', '&='),
      field('body', $._innerPattern)
    ),

    _innerPattern: $ => choice(
      $.pattern,
      $.choice_pattern,
      $.group_pattern,
      $.interleave_pattern,
      $.repeated_pattern,
    ),

    _primaryPattern: $ => seq(
      optional($.annotation),
      choice(
        $.primary,
        seq('(', $._innerPattern, ')')),
    ),

    pattern: $ => seq(
      $._primaryPattern, repeat($.follow_annotation)),

    primary: $ => choice(
      seq('element', $._nameClass, $.pattern_block),
      seq('attribute', $._nameClass, $.pattern_block),
      seq('list', $.pattern_block),
      seq('mixed', $.pattern_block),
      'empty', 'text', 'notAllowed',
      $.identifier,
      $.datatype,
      seq('parent', $.identifier),
      seq('grammar',  $.grammar_block),
      $.external
    ),

    external: $ => seq(
      'external',
      field('uri', $.literal),
      $._inherit
    ),
    datatype: $ => choice(
      seq(optional(field('name', $.datatype_name)),
          field('value', $.literal)),
      seq(field('name', $.datatype_name),
          optional(field('param', $.param_block)),
          optional(seq('-', field('except', alias($._primaryPattern, $.pattern)))))
    ),

    pattern_block: $ => seq('{', $._innerPattern, '}'),

    param_block: $ => seq('{', repeat($.param), '}'),
    param: $ => seq(
      optional($.annotation),
      field('name', $.identifier),
      '=',
      field('value', $.literal)),

    repeated_pattern: $ => seq(
      alias($._primaryPattern, $.pattern), choice('*', '+', '?')),

    _particle: $ => choice($.pattern, $.repeated_pattern),

    choice_pattern: $ => $._patternChoice,
    group_pattern: $ =>  $._patternGroup,
    interleave_pattern: $ => $._patternInterleave,

    _patternChoice: $ => choice(
      seq($._particle, '|', $._particle),
      seq($._particle, '|', $._patternChoice),
    ),

    _patternGroup: $ => choice(
      seq($._particle, ',', $._particle),
      seq($._particle, ',', $._patternGroup),
    ),

    _patternInterleave: $ => choice(
      seq($._particle, '&', $._particle),
      seq($._particle, '&', $._patternInterleave),
    ),

    _namespaceURILiteral: $ => choice(
      $.literal,
      'inherit'),
    _inherit: $ => seq('inherit', '=', field('ns', $.identifier)),

    literal: $ => $._literal,
    _literal: $ => choice(
      $.literal_segment,
      seq($.literal_segment, '~', $._literal)
    ),
    literal_segment: $ => token(choice(
      seq("'", /[^'\n]*/, "'"),
      seq('"', /[^"\n]*/, '"'),
      seq('"""', /("?"?[^"])*/, '"""'),
      seq("'''", /('?'?[^"])*/, "'''")
    )),

    _nameClass: $ => choice(
      $.simple_name_class,
      $.choice_name_class,
      $.except_name_class
    ),

    simple_name_class: $ => seq(
      $._simpleNameClass,
      repeat($.follow_annotation)),

    except_name_class: $ => seq(
      optional($.annotation),
      field('name', $.name), '-',
      field('except', alias($._simpleNameClass, $.simple_name_class)),
      repeat($.follow_annotation)),

    _simpleNameClass: $ => seq(
      optional($.annotation),
      choice(
        $.name,
        seq('(', $._nameClass, ')')),
    ),

    choice_name_class: $ => $._nameClassChoice,
    _nameClassChoice: $ => choice(
      seq($.simple_name_class, '|', $.simple_name_class),
      seq($.simple_name_class, '|', $._nameClassChoice),
    ),

    datatype_name: $ => choice($._CName, 'string', 'token'),


    identifier: $ => choice($._NCName, $._QuotedName),
    name: $ => choice(
      $._NCName,
      $._QuotedName,
      $._CName,
      seq(field('ns', $.prefix), token.immediate(':*')),
      '*'
    ),
    _CName: $ => seq(field('ns', $.prefix), token.immediate(seq(':', NCNAME))),
    prefix: $ => $._NCName,
    _NCName: _ => NCNAME,
    _QuotedName: _ => token(seq('\\', NCNAME)),

    annotation: $ => choice(
      repeat1($.documentation),
      seq(optional(repeat1($.documentation)), $.annotation_block)
    ),

    annotation_block: $ => seq(
      '[',
      repeat($.annotation_attribute),
      repeat($.annotation_element),
      ']'),
    annotation_attribute: $ => seq(
      field('name', alias($.element_name, $.name)),
      '=',
      field('value', $.literal)),
    annotation_element: $ => seq(
      alias($.element_name, $.name),
      $.annotation_element_body
    ),
    annotation_element_body: $ => seq(
      '[',
      repeat($.annotation_attribute),
      repeat(choice($.annotation_element, $.literal)),
      ']'),
    element_name: $ => choice(
      $._NCName,
      $._QuotedName,
      $._CName
    ),

    follow_annotation: $ => seq(
      '>>', $.annotation_element
    ),

    comment: $ => token(prec(-10, /#.*/)),
    documentation: $ => token(/##.*/)
  }
});
/*
  Local Variables:
  js-indent-level: 2
  End:
*/
