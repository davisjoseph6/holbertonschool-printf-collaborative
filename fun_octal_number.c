#include "main.h"

/**
 * This function calculates the lenght of the number of digits in the octal representation of an unsigned integer num.
 * It takes an unsigned integer num as an input parameter.
 * 
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
 * This function prints the octal representation of an unsigned integer num.
 * 
 * The function recursively calls itself to print each digit of the octal representation.
 * Return: octal number
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
