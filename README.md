# The awesome _printf() function

<p align="center">
<img src="https://user-images.githubusercontent.com/124044887/256537628-75705fa9-c22e-4afa-b5dd-3b931ac3e3c6.jpeg"/>
       </p>


**_printf** - formatted output conversion





## `Description`

The  **_printf()** function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

The _printf function is a custom implementation of the standard C library function printf. It provides a simplified way to print formatted output to the console, similar to how printf works. The function supports various format specifiers that allow you to print different data types and control the output format.


The format string is a character string, beginning and ending inits  initial shift state, if any. The format string is composed of zero or more  directives:  ordinary  characters  (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
Each conversion specification is introduced by the character % and ends with conversion specifier.





This repository contains a C program that implements a simplified version of the printf function called _printf. The _printf function allows printing formatted output to the standard output, supporting %c, %s, %d, %i, %u, %o, and %% format specifiers. The implementation uses the stdarg.h library to handle variable-length arguments.

## `Requeriments`

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

To compile the _printf, run:, execute:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```


## `How to Use`

Include the header file `main.h` in your C source file, and compile the source files together. Then, you can use the `_printf()` function similarly to how you would use the standard `printf()` function.


The _printf function will print the formatted output to the standard output (usually the terminal/console).

The provided code is a custom implementation of the _printf function, but it's missing the definitions for some of the helper functions, such as `_putchar`, `print_string`, `len_number`, `fun_number`, `len_unsigned_number`, `fun_unsigned_number`, `len_octal_number`, and `fun_octal_number`. To make the code complete and functional, you need to provide the implementations for these functions.

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


## Examples

```c

#include "main.h"
int main(void)
{
        _printf("String: [%s]\n", "Welcome to Holberton School!");
        _printf("Character:[%c]\n", 'H');
        _printf("Number of bytes: %d\n", 1024);
        _printf("Unsigned integer: %u\n", 12345);
        _printf("Octal: %o\n", 30071);
  return 0;
}

**_printf()** is written and maintained by **Davis Joseph** (davisjosep767@gmail.com) and **Idoudi Mokhtar** (idoudimokhtar@gmail.com).


## `flowchart`

[printf diagram.pdf](https://github.com/idoudi2020/holbertonschool-printf/files/12193412/printf.diagram.pdf)

