#include "main.h"

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
