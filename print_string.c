#include "main.h"

/**
 * This function is responsible for printing a given string str. 
 * It takes a pointer to a character array (char*) as an input parameter.
 * The function returns an integer representing the total number of characters printed.
 * 
 * 
 */

int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		/*
		 * _putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		*/

		str = "(null)";
	}

	while (*str)
	{
		i += _putchar(*str);
		str++;

	}

	return (i);
}
