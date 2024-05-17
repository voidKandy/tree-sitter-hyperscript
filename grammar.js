module.exports = grammar({
  name: "_hyperscript",

  rules: {
    source_file: ($) => repeat($._statement),
    //
    _statement: ($) =>
      choice(
        // $.on_statement,
        $.set_statement,
        // $.behavior_statement,
        // $.def_statement,
      ),
    //
    // on_statement: ($) => seq("on", $.event, $.command, $.expression),
    set_statement: ($) => seq("set", $._identifier, "to", $.expression),

    expression: ($) => choice($._identifier, $._literal),

    _identifier: ($) =>
      choice($.global_identifier, $.element_identifier, $.local_identifier),
    global_identifier: ($) => /(\$[a-zA-Z0-9_]+)|(global\s+[a-zA-Z0-9_]+)/,
    element_identifier: ($) => /(\:[a-zA-Z0-9_]+)|(element\s+[a-zA-Z0-9_]+)/,
    local_identifier: ($) => /(local\s+[a-zA-Z0-9_]+)/,

    _literal: ($) => choice($.dom_literal, $.num_literal, $.string_literal),

    num_literal: ($) => /\d+/,
    string_literal: ($) => /(".*")|(`.*`)|('.*')/,

    dom_literal: ($) =>
      choice(
        $.class_literal,
        $.id_literal,
        $.query_literal,
        $.attribute_literal,
        $.style_literal,
      ),

    class_literal: ($) => /\.([^\s]+)/,
    id_literal: ($) => /\#([^\s]+)/,
    query_literal: ($) => /<([^>]+)\/>/,
    attribute_literal: ($) => /@([^\s]+)/,
    style_literal: ($) => /\*([^\s]+)/,
  },
});
