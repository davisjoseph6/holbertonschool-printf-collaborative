#include "main.h"

/**
 * 
 * 
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
 * 
 * 
 *
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
