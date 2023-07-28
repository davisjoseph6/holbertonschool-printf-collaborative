#include "main.h"
#include <stdio.h>

/**
 * len_number - This function that calculates the length of a number.
 * It takes an integer num as an input parameter.
 * The function returns an integer representing the length of the number.
 * 
 * 
 */

int len_number(int num)

{
	int i = 0;

	if (num == 0)
	return (1);

	if (num == 0)
	return (1);

	if (num < 0)
	{
		i++;
		num = -num;
	}

	while (num > 0)
	{
		i++;
		num /= 10;
	}

	return (i);
}

/**
 * fun_number - This function prints the digits of an integer num to the standard output (console).
 * It takes an integer num as an input parameter but doesn't return any value (void return type).
 * The function recursively calls itself to print each digit of the number.
 * 
 * 
 */

void fun_number(int num)

{
	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		fun_number(147483648);
	}

	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		fun_number(num / 10);
		fun_number(num % 10);
	}

	else
	{
		_putchar(num + '0');
	}
}
