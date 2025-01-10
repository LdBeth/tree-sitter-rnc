;; keywords
[
"attribute"
"default"
"datatypes"
"div"
"element"
"empty"
"external"
"grammar"
"include"
"inherit"
"list"
"mixed"
"namespace"
"notAllowed"
"parent"
;;"start"
"string"
"text"
"token" ] @keyword

["=" "&=" "|=" "*" "?" "+" "-" "~" "&" "," "|" ] @operator

(datatype_name ns: (prefix) @type) 
(name ns: (prefix)  @type)

(literal_segment) @string

(define name: (identifier) @function)

(comment) @comment

(documentation) @attribute
