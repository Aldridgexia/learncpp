## 1.1 writing a simple c++ program

- every program must have main function
- element of function
  - return type
  - function name
  - parameter list
  - function body
- return terminates the function, 
- main function returns a status indicator
- source files end with a suffix
- on UNIX systems, we obtain the status by `echo $?`

## 1.2 a first look at input/out

- IO comes with standard library
- iostream, istream and ostream
- a stream is a sequence of characters read from or written to an IO device
- cin and cout, cerr and clog
- the system associates each of these objects with the window in which the program is executed
- the name inside angle brackets refers to a header
- `<<` operator takes two operands, left-hand must be an `ostream` object and right is a value to print
- string literal enclosed in double quotation marks
- `endl` is called manipulator
- `endl` has the effect of ending current line and flushing the buffer associated with that device
- namespace `std`
- `::` is the scope operator
- `>>` is the input operator

## 1.3 a word about comments

- `//`single line comment
- `/* */`multi line comment
- comment paris do not nest

## 1.4 flow of control

- `+=` compound assignment operator
- `++x` prefix increment operator
- each for statement has a header and a body
- the header consists of 3 parts: an init-statement, a condition and an expression
- common error:
  - syntax errors
  - type errors
  - declaration errors
- `=` for assignment and `==` for equality

## 1.5 introducing classes

- headers from standard library are enclosed with `<>` while those are not in `""`
- member functions are also referred to as methods.
- `.` dot operator and `()` call operator

## 1.6 the bookstore program



