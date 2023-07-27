#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int len_number(int num);
void fun_number(int num);
int len_unsigned_number(unsigned int num);
void fun_unsigned_number(unsigned int num);
int len_octal_number(unsigned int num);
void fun_octal_number(unsigned int num);

#endif
