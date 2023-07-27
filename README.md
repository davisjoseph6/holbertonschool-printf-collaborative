# The awesome _printf() function

**_printf** - formatted output conversion

**#include "main.h"**
**int _printf(const char *format, ...);**

## Description
The **_printf()** function produce output according to a *format* as described below. Also, write output to *stdout*, the standard output stream.

The  **_printf()** function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

### Format of the format string

The format string is a character string, beginning and ending inits  initial shift state, if any. The format string is composed of zero or more  directives:  ordinary  characters  (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.




Project README
This repository contains a C program that implements a simplified version of the printf function called _printf. The _printf function allows printing formatted output to the standard output, supporting %c, %s, %d, %i, %u, %o, and %% format specifiers. The implementation uses the stdarg.h library to handle variable-length arguments.

How to Use
To use the _printf function, follow these steps:

Clone the repository or download the source code files.

Include the required header files (stdarg.h, stdio.h, unistd.h, and "main.h") in your project.

Call the _printf function in your C code, providing the desired format string and any necessary arguments.

The _printf function will print the formatted output to the standard output (usually the terminal/console).


## `Function Signature`
* ``` int _printf(const char *format, ...);```

## `Format Specifiers`


The _printf function supports the following format specifiers:

- `%c`: Used for printing a single character.
- `%s`: Used for printing a null-terminated string.
- `%d: %i`: Used for printing signed decimal integers.
- `%u`: Used for printing unsigned decimal integers.
- `%o` Used for printing unsigned octal integers.
- `%%`Used to print a literal % character.


## About Functions

### int _write(char c)
This function gets a char parameter and writes the parameter to the stdout, the standard output stream.

### int _print_a_char (va_list args)
This function gets a variadic arguments list, traverse the list, prints each character of char type and returns
the length of the character.

### 
This function gets a variadic arguments list, traverse the list, prints each string and returns the length of the
string.

### int num = va_arg(args, int);
This function gets a variadic arguments list, traverse the list, prints each number of int type and returns the
length of the integer.

###char c = va_arg(args, int);

###

###

















## Return Value


Upon successful return, the **_printf()** function return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.


## Examples

**#include "main.h"**

_printf("Welcome to Holberton School"); **// the output will be: Welcome to Holberton School**

_printf("%c", 'H'); // **the output will be: H**

_printf("%s", "Welcome to Holberton School"); **// the output will be: Welcome to Holberton School**

_printf("%!\n"); **// the output will be '%!'**

_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know"); **// the output will be: Complete the sentence: You know nothing, Jon Snow.**

_printf("%        s", "Hello"); **// the output will be: Hello**

_printf("%        k"); **// the output will be: % k**

## Author

**_printf()** is written and maintained by **Davis Joseph** (davisjosep767@gmail.com) and **Idoudi Mokhtar** (idoudimokhtar@gmail.com).