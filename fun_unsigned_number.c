#include "main.h"

/**
 * This function calculates the number of digits in the decimal representation of an unsigned integer num.
 * It takes an unsigned integer num as an input parameter.
 * The function returns an integer representing the number of digits in the decimal representation of num.
 * 
 * 
 */

int len_unsigned_number(unsigned int num)
{
	int count = 0;

	if (num == 0)

	return (1);

	while (num > 0)
	{
		count++;
		num /= 10;
	}

	return (count);
}

/**
 * This function that calculates the length of a unsigned number
 * 
 * The function recursively calls itself to print each digit of the decimal representation.
 * Return unsigned number.
 * 
 */

void fun_unsigned_number(unsigned int num)
{
	if (num >= 10)
	{
		fun_unsigned_number(num / 10);
		fun_unsigned_number(num % 10);
	}

	else
	{
		_putchar(num + '0');
	}
}
