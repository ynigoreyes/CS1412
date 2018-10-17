# Chapter 7

* Integer Types
  * `int`, `short` `unsigned`
  * `short` uses 16 bits
  * `signed` uses one of the bits to determine whether or not it is a negative
  * `unsigned` does NOT use the bits to determine negativity
* Escape Sequences
  * \a - Alert
  * \b - backspace
  * \f - form feed
  * \n - new Line
  * \{", '} - Any kind of quote
  * \? - question marks only
  * \{\, /} - any kind of slashes
* IO for characters
  * `putchar` and `getchar`
  * We use them to either write a character into stdout - `putchar('a');`
  * Or ask for a character from stdin - `c = getchar();`
  * Careful using getchar() within a while loop as getchar will replace
    the previous value that is it getting saved to
