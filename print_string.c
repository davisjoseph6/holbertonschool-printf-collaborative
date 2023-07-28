#include "main.h"

/**
 * print_string - This function is responsible for printing a given string str. 
 * It takes a pointer to a character array (char*) as an input parameter.
 * 
 * Return: string
 * 
 */

int print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		

		str = "(null)";
	}

	while (*str)
	{
		i += _putchar(*str);
		str++;

	}

	return (i);
}
