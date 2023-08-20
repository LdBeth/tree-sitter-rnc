module.exports = grammar({
  name: 'rnc',
  extras: $ => [
    /\s/,
    $.comment
  ],
  rules: {
    source_file: $ => seq(
      repeat($.declare),
      choice($.pattern, repeat($._grammarContent))
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

    _grammarContent: $ => choice(
      $.define, // TODO
    ),

    define: $ => seq(
      field('name', $.identifier),
      choice('=', '|=', '&='),
      field('body', $.pattern)
    ),

    pattern: $ => choice(
      $._primaryPattern,
      $._patternChoice,
      $._patternGroup,
      $._patternInterleave,
      $._repeatedPattern
    ),

    _primaryPattern: $ => choice(
      seq('element', $.nameClass, '{', $.pattern, '}'),
      seq('attribute', $.nameClass, '{', $.pattern, '}'),
      seq('list', '{', $.pattern, '}'),
      seq('mixed', '{', $.pattern, '}'),
      seq('parent', $.identifier),
      $.identifier,
      seq(optional($.datatypeName), $._literal),
      seq($.datatypeName,
          optional(seq('{', repeat($.param), '}')),
          optional(seq('-', $._primaryPattern))),
      seq('(', $.pattern, ')'),
    ),

    param: $ => seq($.identifier, '=', $._literal), 

    _repeatedPattern: $ => seq($._primaryPattern, choice('*', '+', '?')),

    _particle: $ => choice($._primaryPattern, $._repeatedPattern),
    
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

    nameClass: $ => choice(
      $._nameClassChoice,
      $._simpleNameClass,
      seq($.name, '-', $.nameClass)
    ),

    _simpleNameClass: $ => choice(
      $.name,
      seq('(', $.nameClass, ')')
    ),

    _nameClassChoice: $ => choice(
      seq($._simpleNameClass, '|', $._simpleNameClass),
      seq($._simpleNameClass, '|', $._nameClassChoice),
    ),

    datatypeName: $ => choice(
      seq($.identifier, ':', $.identifier),
      'string', 'token'),


    identifier: $ => choice($._NCName, seq('\\', $._NCName)),
    name: $ => choice(
      $._NCName,
      seq('\\', $._NCName),
      seq($._NCName, ':', $._NCName),
      seq($._NCName, ':*'),
      '*'
    ),
    _NCName: $ => /[_0-9A-Za-z][_0-9A-Za-z\-\.]*/,
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

    comment: $ => token(/#.*/)
  }
});
/*
  Local Variables:
  js-indent-level: 2
  End:
*/
