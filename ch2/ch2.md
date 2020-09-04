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

- ```c++
  int i = 0;
  int *const p1 = &i;  // we can't change the value of p1; const is top-level
  const int ci = 42;   // we cannot change ci; const is top-level
  const int *p2 = &ci; // we can change p2; const is low-level
  const int *const p3 = p2; // right-most const is top-level, left-most is not
  const int &r = ci;  // const in reference types is always low-level
  
  i = ci;  // ok: copying the value of ci; top-level const in ci is ignored
  p2 = p3; // ok: pointed-to type matches; top-level const in p3 is ignored
  
  int *p = p3; // error: p3 has a low-level const but p doesn't
  p2 = p3;     // ok: p2 has the same low-level const qualification as p3
  p2 = &i;     // ok: we can convert int* to const int*
  int &r = ci; // error: can't bind an ordinary int& to a const int object
  const int &r2 = i; // ok: can bind const int& to plain int
  ```

- we can convert a non`const` to `const` but not the other way round

- a constant expression cannot change its value and can be evaluated at compile time

- a literal is a constant expression

- a `const` object that is initialized from a constant expression is also a constant expression

- ```c++
  const int max_files = 20;    // max_files is a constant expression
  const int limit = max_files + 1; // limit is a constant expression
  int staff_size = 27;       // staff_size is not a constant expression
  const int sz = get_size(); // sz is not a constant expression
  ```

- ```c++
  // c++ 11
  constexpr int mf = 20;        // 20 is a constant expression
  constexpr int limit = mf + 1; // mf + 1 is a constant expression
  constexpr int sz = size();    // ok only if size is a constexpr function
  ```

- types we can use in a `constexpr` are literal types

- arithmetic, reference and pointer types are literal types

- ```c++
  const int *p = nullptr;     // p is a pointer to a const int
  constexpr int *q = nullptr; // q is a const pointer to int
  
  constexpr int *np = nullptr; // np is a constant pointer to int that is null
  int j = 0;
  constexpr int i = 42;  // type of i is const int
  // i and j must be defined outside any function
  constexpr const int *p = &i; // p is a constant pointer to the const int i
  constexpr int *p1 = &j;      // p1 is a constant pointer to the int j
  ```

### 2.5 dealing with types

- type alias is a name that is a synonym for another type

- ```c++
  typedef double wages;   // wages is a synonym for double
  typedef wages base, *p; // base is a synonym for double, p for double*
  
  // c++ 11
  using SI = Sales_item; // SI is a synonym for Sales_item
  
  wages hourly, weekly;    // same as double hourly, weekly;
  SI item;                 // same as Sales_item item
  ```

- ```c++
  typedef char *pstring;
  const pstring cstr = 0; // cstr is a constant pointer to char
  const pstring *ps;      // ps is a pointer to a constant pointer to char
  
  const char *cstr = 0; // wrong interpretation of const pstring cstr
  char *const cstr = 0; // correct interpretation
  ```

- a variable that uses `auto` must have an initializer

- ```c++
  // c++ 11
  // the type of item is deduced from the type of the result of adding val1 and val2
  auto item = val1 + val2; // item initialized to the result of val1 + val2
  
  auto i = 0, *p = &i;      // ok: i is int and p is a pointer to int
  auto sz = 0, pi = 3.14;   // error: inconsistent types for sz and pi
  
  int i = 0, &r = i;
  auto a = r;  // a is an int (r is an alias for i, which has type int)
  
  const int ci = i, &cr = ci;
  auto b = ci;  // b is an int (top-level const in ci is dropped)
  auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
  auto d = &i;  // d is an int*(& of an int object is int*)
  auto e = &ci; // e is const int*(& of a const object is low-level const)
  
  const auto f = ci; // deduced type of ci is int; f has type const int
  
  auto &g = ci;       // g is a const int& that is bound to ci
  auto &h = 42;       // error: we can't bind a plain reference to a literal
  const auto &j = 42; // ok: we can bind a const reference to a literal
  
  auto k = ci, &l = i;    // k is int; l is int&
  auto &m = ci, *p = &ci; // m is a const int&;p is a pointer to const int
  // error: type deduced from i is int; type deduced from &ci is const int
  auto &n = i, *p2 = &ci;
  ```

- `decltype` returns the type of expression's operand but does not evaluate the expression

- `decltype` returns the type of the variable, including top-level `const` references

- ```c++
  const int ci = 0, &cj = ci;
  decltype(ci) x = 0; // x has type const int
  decltype(cj) y = x; // y has type const int& and is bound to x
  decltype(cj) z;     // error: z is a reference and must be initialized
  ```

- `decltype` returns a reference type for expressions that yield objects taht can stand on the left-hand side of assignment

- ```c++
  // decltype of an expression can be a reference type
  int i = 42, *p = &i, &r = i;
  decltype(r + 0) b;  // ok: addition yields an int; b is an (uninitialized) int
  decltype(*p) c;     // error: c is int& and must be initialized
  
  // decltype of a parenthesized variable is always a reference
  decltype((i)) d;    // error: d is int& and must be initialized
  decltype(i) e;      // ok: e is an (uninitialized) int
  ```

### 2.6 defining our own data structures

- ```c++
  struct Sales_data {
      std::string bookNo;
      unsigned units_sold = 0;
      double revenue = 0.0;
  };
  
  struct Sales_data { /* ... */ } accum, trans, *salesptr;
  // equivalent, but better way to define these objects
  struct Sales_data { /* ... */ };
  Sales_data accum, trans, *salesptr;
  ```

- close curly must be followed by a semicolon

- this class only has data members

- in-class initializers are restricted

- typically, classes are stored in headers whose name derives from the name of the class

- preprocessor makes including a header multiple times safe

- preprocessor is originally from C

- preprocessor runs before the compiler

- preprocessor variables have two states, defined or undefined

  - `#define`
  - `#ifdef`
  - `ifndef`

- preprocessor variables and names of header guards must be unique throughout the program