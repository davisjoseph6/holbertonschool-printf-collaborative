#include "main.h"

/**
 * This function calculates the number of digits in the octal representation of an unsigned integer num.
 * It takes an unsigned integer num as an input parameter.
 * The function returns an integer representing the number of digits in the octal representation of num.
 * 
 * 
 */

int len_octal_number(unsigned int num)
{
	int count = 0;

	if (num == 0)

	return (1);

	while (num > 0)
	{
		count++;
		num /= 8;
	}

	return (count);
}

/**
 * This function prints the octal representation of an unsigned integer num to the standard output (console).
 * It takes an unsigned integer num as an input parameter but doesn't return any value (void return type).
 * The function recursively calls itself to print each digit of the octal representation.
 * 
 * 
 */

void fun_octal_number(unsigned int num)
{
	if (num >= 8)
	{
		fun_octal_number(num / 8);
		fun_octal_number(num % 8);
	}

	else
	{
		_putchar(num + '0');
	}
}
