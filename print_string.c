#include "main.h"

int print_string (char *str)
{
  int i=0;

  if (str == NULL)
    {
      _putchar('(');
      _putchar('n');
      _putchar('u');
      _putchar('l');
      _putchar('l');
      _putchar(')');
    }
  while (*str)
 
    {
      i += _putchar(*str);
      i++;
 
    }
  return (i);
}
