# tree-sitter-graphql

Attempt at a graphql grammar for [tree-sitter][].  
Install with

```
npm install tree-sitter-graphql
```

[tree-sitter]: https://github.com/tree-sitter/tree-sitter

I think I have the whole ast defined, but please let me know (or send a PR!) if I have missed something. I have all the rules defined with their names from the graphql spec (https://facebook.github.io/graphql/draft), so you can look at those and write an Atom grammar.


I didn't hide any rule (http://tree-sitter.github.io/tree-sitter/creating-parsers#hiding-rules) because I feel like it is quite useful to have the groupings, and not very distracting either. At least, not for graphql which is quite simple.


Thanks for reading,  
Michiel Dral
