module.exports = grammar({
  name: 'rnc',
  extras: $ => [
    /\s/,
    $.comment
  ],
  rules: {
    source_file: $ => seq(
      repeat($.declare),
      choice($._pattern, repeat($._grammarContent))
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
          '=', field('uri', $._literal))
    ),

    _grammarContent: $ => seq(
      optional($.annotation),
      choice(
        $.define,
        $.grammar_div,
        $.include)
    ),

    grammar_div: $ => seq('div', $.grammar_block),

    grammar_block: $ => seq('{', $._grammarContent, '}'),

    include: $ => seq(
      'include',
      field('uri', $._literal),
      optional($._inherit),
      $.include_block
    ),

    include_block: $ => seq(
      '{',
      optional($.annotation),
      choice($.define, $.include_div),
      '}'),

    include_div: $ => seq('div', $.include_block),

    define: $ => seq(
      field('name', $.identifier),
      choice('=', '|=', '&='),
      field('body', $._pattern)
    ),

    _pattern: $ => choice(
      seq($._primaryPattern, repeat($.follow_annotation)),
      $.choice_pattern,
      $.group_pattern,
      $.interleave_pattern,
      $.repeated_pattern,
    ),

    _primaryPattern: $ => seq(
      optional($.annotation),
      choice(
        $.primary,
        seq('(', $._pattern, ')')),
    ),

    primary: $ => choice(
      seq('element', $._nameClass, $.pattern_block),
      seq('attribute', $._nameClass, $.pattern_block),
      seq('list', $.pattern_block),
      seq('mixed', $.pattern_block),
      $.identifier,
      seq('parent', $.identifier),
      $.datatype,
    ),

    datatype: $ => choice(
      seq(optional(field('name', $.datatype_name)),
          field('value', $._literal)),
      seq(field('name', $.datatype_name),
          optional($.param_block),
          optional(seq('-', field('except', $._primaryPattern))))
    ),

    pattern_block: $ => seq('{', $._pattern, '}'),

    param_block: $ => seq('{', repeat($.param), '}'),
    param: $ => seq(
      optional($.annotation),
      field('name', $.identifier),
      '=',
      field('value', $._literal)), 

    repeated_pattern: $ => seq($._primaryPattern, choice('*', '+', '?')),

    _particle: $ => choice($._primaryPattern, $.repeated_pattern),

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
      $._literal,
      'inherit'),
    _inherit: $ => seq('inherit', '=', field('ns', $.identifier)),

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
      seq($._simpleNameClass, repeat($.follow_annotation)),
      $._nameClassChoice,
      seq($._exceptNameClass, repeat($.follow_annotation)),
    ),

    _simpleNameClass: $ => seq(
      optional($.annotation),
      choice(
        $.name,
        seq('(', $._nameClass, ')')),
    ),

    _nameClassChoice: $ => choice(
      seq($._simpleNameClass, '|', $._simpleNameClass),
      seq($._simpleNameClass, '|', $._nameClassChoice),
    ),

    _exceptNameClass: $ => seq(
      optional($.annotation),
      $.name, '-', $._simpleNameClass,
    ),

    datatype_name: $ => choice($._CName, 'string', 'token'),


    identifier: $ => choice($._NCName, seq('\\', $._NCName)),
    name: $ => choice(
      $._NCName,
      seq('\\', $._NCName),
      $._CName,
      seq($._NCName, ':*'),
      '*'
    ),
    _CName: $ => seq($._NCName, ':', $._NCName),
    _NCName: $ => /[_0-9A-Za-z][_0-9A-Za-z\-\.]*/,

    annotation: $ => choice(
      $.documentations,
      seq($.documentations, $.annotation_block)
    ),

    documentations: $ => repeat1($._docLine),
    annotation_block: $ => seq(
      '[',
      repeat($.annotation_attribute),
      repeat($.annotation_element),
      ']'),
    annotation_attribute: $ => seq(
      field('name', $.element_name),
      '=',
      field('value', $._literal)),
    annotation_element: $ => seq(
      $.element_name,
      $.annotation_element_block
    ),
    annotation_element_block: $ => seq(
      '[',
      repeat($.annotation_attribute),
      repeat(choice($.annotation_element, $._literal)),
      ']'),
    element_name: $ => choice(
      $._NCName,
      seq('\\', $._NCName),
      $._CName
    ),

    follow_annotation: $ => seq(
      '>>', $.annotation_element
    ),
    
    _keyword: $ => choice(
      'attribute',
      'default',
      'datatypes',
      'div',
      'element',
      'empty',
      'external',
      'grammar',
      'include',
      'inherit',
      'list',
      'mixed',
      'namespace',
      'notAllowed',
      'parent',
      'start',
      'string',
      'text',
      'token'),

    comment: $ => token(prec(-10, /#.*/)),
    _docLine: $ => token(/##.*/)
  }
});
/*
  Local Variables:
  js-indent-level: 2
  End:
*/
