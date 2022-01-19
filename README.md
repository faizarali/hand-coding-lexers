# Hand Coding Lexers

These are small examples of hand coding lexers.

- Regular Expressions are equivalent to code
  - Concatenation is a sequence of statements
  - Alternation is an if statement
  - Closure is a while loop

The following will show examples/templates for converting regular expressions to code (particularly c code):

```c
// concatenation
c = fgetc(file);
assert('a' == c);
c = fgetc(file);
assert('b' == c);
```

```c
// alternation
c = fgetc(file);
if (...) {
  ungetc(c, file);
  // first alternative
} else if (...) {
  ungetc(c, file);
  // second alternative
}
```

```c
// closure
c = fgetc(file);
while (...) {
  ungetc(c, file);
  // repeated pattern
}
```

- `lexer1.c` represents an example of concatenation
- `lexer2.c` represents an example of alternation
- `lexer3.c` represents an example of closure

To compile (using `lexer3.c` as an example): `gcc lexer3.c -o lexer`

To execute: `./lexer`

Expected output (Using `D` as the input (though stdin)):
```
recognizing regex
D
recognized
```
