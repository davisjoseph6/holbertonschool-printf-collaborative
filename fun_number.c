#include "main.h"
#include <stdio.h>
int len_number(int num)
{
  int i = 0;


  if (num == 0)
    return 1;
  

  if (num == 0)
    return 1;


  if (num < 0) {
    i++;
    num = -num;
  }
  while (num > 0) {
    i++;
    num /= 10;
  }
  return i;
}
void fun_number(int num)
{
  if (num == -2147483648) {
    _putchar('-');
    _putchar('2');
    fun_number(147483648);
  } else if (num < 0) {
    _putchar('-');
    num = -num;
  }
  if (num >= 10) {
    fun_number(num / 10);
    fun_number(num % 10);
  } else {
    _putchar(num + '0');
  }
}
