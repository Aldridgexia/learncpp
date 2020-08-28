## 2. Variables and Basic Types

### 2.1 primitive built-in types

- arithmetic types and a special type named void

- integral types and floating-point types

- ![02tab01](https://learning.oreilly.com/library/view/c-primer-fifth/9780133053043/graphics/02tab01.jpg)

- `bool` represents the truth values `true` and `false`

- `char` is the same size as a single machine byte

- `char16_t` and `char32_t` are for Unicode

- `long long` is new

- the smallest chunk of addressable memory is referred to as a "byte."

- on most machines a byte contains 8 bits and a word is either 32 or 64 bits

- typically, `float`s are in one word 32 btis, `double`s are in two words 64 bits, and `long double` s are either 3 or 4 words

- integral types may be signed or unsigned, former could include negative/postive/zero while latter only represents zero or above

- `unsigned int` is equal to `unsigned`

- unsigned type use all bits to represent the value, 8-bit `unsigned char` can hold [0, 255]

- `signed char` is guaranteed to hold [-127, 127], most modern machines allow [-128, 127]

- do not use plain `char` and `bool` in arithmetic expressions

- use `double` over `float`

- ```
  bool b = 42;            // b is true
  int i = b;              // i has value 1
  i = 3.14;               // i has value 3
  double pi = i;          // pi has value 3.0
  unsigned char c = -1;   // assuming 8-bit chars, c has value 255
  signed char c2 = 256;   // assuming 8-bit chars, the value of c2 is undefined
  ```

- assign an out-of-range value to an object of signed type, the result is undefined

- a value is known as literal because its value self-evident

- `20 /* decimal */ 024 /* octal */ 0x14 /* hexadecimal */`

- by default, decimal literals are signed while octal and hexadecimal literals can be either signed or unsigned

- floating-point literals include either a decimal point or an exponent

- by default, floating-point literals have type `double`

- single quotes is a literal of type `char`, double quotation is a string literal

- a null character is appended to every string literal, "A" represents an array of two characters

- ```c++
  // multiline string literal
  std::cout << "a really, really long string literal "
               "that spans two lines" << std::endl;
  ```

- escape sequence to represent nonprintable characters

- `true` and `false` are literals of type `bool`

- `nullptr`  is a pointer literal

### 2.2 variables

- a simple variable definition consists of a type specifier followed by a list of one or more variable names

- initialization is different from assignment

- ```c++
  int units_sold = 0;
  int units_sold = {0};
  int units_sold{0};
  int units_sold(0);
  ```

- default initialization when variables are defined without an initializer

- variables of built-in type defined inside a function are uninitialized

- separate compilation lets us split our programs into several files

- initialize every object of built-in type

- declaration and definition

- ```c++
  extern int i;   // declares but does not define i
  int j;          // declares and defines j
  extern double pi = 3.1416; // definition
  ```

- To use the same variable in multiple files, we must define that variable in one—and only one—file. Other files that use that variable must declare—but not define—that variable.

- identifiers can be composed of letters, digits and underscore character

- C++ keywords

- ![02tab03](https://learning.oreilly.com/library/view/c-primer-fifth/9780133053043/graphics/02tab03.jpg)

- C++ alternative operator names

- ![02tab04](https://learning.oreilly.com/library/view/c-primer-fifth/9780133053043/graphics/02tab04.jpg)

- conventions

  - variable names are lowercase
  - classes beigin with an uppercase letter
  - visually distinguish each word in identifiers

- scope is a part of the program which a name has a particular meaning, most sopces are in curly braces

- `main` has global scope

- nested scopes have inner scope and outer scope

- `::` scope operator, global scope has no name

### 2.3 compound types

- a type that is defined in terms of another type, most used two are references and pointers

- a declaration is a base type followed by a list of declarators

- lvalue reference and rvalue reference

- a reference defines an alternative name for an object

- ```c++
  int ival = 1024;
  int &refVal = ival;  // refVal refers to (is another name for) ival
  int &refVal2  // error: a reference must be initialized
  ```

- reference can't be rebind, so it must be initialized

- no reference to a reference

- the type of reference must match exactly with the object it referred

- a pointer is an object in its own right

- pointers need not be initialized at the time it is defined

- ```c++
  int *ip1, *ip2;  // both ip1 and ip2 are pointers to int
  double dp, *dp2; // dp2 is a pointer to double; dp is a double
  ```

- a pointer holds the address of another object, use address-of operator `&`

- we may not define a pointer to a reference

- ```c++
  double dval;
  double *pd = &dval;  // ok: initializer is the address of a double
  double *pd2 = pd;    // ok: initializer is a pointer to double
  int *pi = pd;  // error: types of pi and pd differ
  pi = &dval;    // error: assigning the address of a double to a pointer to int
  ```

- pointer value

  - point to an object
  - point the the location past the end of an object
  - null pointer
  - invalid

- dereference operator `*`

- ```c++
  int ival = 42;
  int *p = &ival; // p holds the address of ival; p is a pointer to ival
  cout << *p;     // * yields the object to which p points; prints 42
  ```

- null pointer

- ```c++
  int *p1 = nullptr; // equivalent to int *p1 = 0; c++11 standard
  int *p2 = 0;       // directly initializes p2 from the literal constant 0
  // must #include cstdlib
  int *p3 = NULL;    // equivalent to int *p3 = 0;
  ```

- preprocessor runs before the compiler

- use `nullptr` instead of `NULL`

- ```c++
  int zero = 0;
  pi = zero;        // error: cannot assign an int to a pointer
  ```

- reference is not an object

- assignment changes its left-hand operand

- ```c++
  int i = 42;
  int *pi = 0;   // pi is initialized but addresses no object
  int *pi2 = &i; // pi2 initialized to hold the address of i
  int *pi3;      // if pi3 is defined inside a block, pi3 is uninitialized
  pi3 = pi2;        // pi3 and pi2 address the same object, e.g., i
  pi2 = 0;          // pi2 now addresses no object
  ```

- any nonzero pointer evaluates as `true`

- `void *` pointers can hold address of any object

- ```c++
  double obj = 3.14, *pd = &obj;
  // ok: void* can hold the address value of any data pointer type
  void *pv = &obj;  // obj can be an object of any type
  pv = pd;          // pv can hold a pointer to any type
  ```

- pointers to pointers

- ```c++
  int ival = 1024;
  int *pi = &ival;    // pi points to an int
  int **ppi = &pi;    // ppi points to a pointer to an int
  ```

- ![058fig01](https://learning.oreilly.com/library/view/c-primer-fifth/9780133053043/graphics/058fig01.jpg)

- references to pointers

- ```c++
  int i = 42;
  int *p;        // p is a pointer to int
  int *&r = p;   // r is a reference to the pointer p
  r = &i; //  r refers to a pointer; assigning &i to r makes p point to i
  *r = 0; //  dereferencing r yields i, the object to which p points; changes i to 0
  ```

### 2.4 `CONST` qualifier

- make a variable unchangeable by defining the type as `const`

- a `const` variable must be initialized

- `const` only matters for operations that might change the variables

- to define a single instance of `const` variable, use `extern` on both its definition and declaration

- ```c++
  // file_1.cc defines and initializes a const that is accessible to other files
  extern const int bufSize = fcn();
  // file_1.h
  extern const int bufSize; // same bufSize as defined in file_1.cc
  ```

- reference to `const` cannot be used to change the object

- ```c++
  const int ci = 1024;
  const int &r1 = ci;   // ok: both reference and underlying object are const
  r1 = 42;              // error: r1 is a reference to const
  int &r2 = ci;         // error: non const reference to a const object
  ```

- a reference to `const` may refer to an object that is not `const`

- a pointer to `const`

- ```c++
  const double pi = 3.14;   // pi is const; its value may not be changed
  double *ptr = &pi;        // error: ptr is a plain pointer
  const double *cptr = &pi; // ok: cptr may point to a double that is const
  *cptr = 42;               // error: cannot assign to *cptr
  ```

- `const` pointers are objects

- ```c++
  int errNumb = 0;
  int *const curErr = &errNumb;  // curErr will always point to errNumb
  const double pi = 3.14159;
  const double *const pip = &pi; // pip is a const pointer to a const object
  
  *pip = 2.72;     // error: pip is a pointer to const
  // if the object to which curErr points (i.e., errNumb) is nonzero
  if (*curErr) {
      errorHandler();
      *curErr = 0; // ok: reset the value of the object to which curErr is bound
  }
  ```

- top-level `const`: the pointer itself is a `const`

- low-level `const`: a pointer can point to a `const` object

- 