#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"





int _printf(const char *format, ...)
{
  int count = 0;
  va_list args;
  va_start(args, format);
  if (!format || !format[0]) 
        return -1;
  while (*format != '\0')
        {
      if (*format != '%')
       {
       count += _putchar(*format);

      }
      else
      {
     format++; 
               if (*format == 'c')
               {
               char c = va_arg(args, int);
               _putchar(c);
                count++;
               }
               else if (*format == 's')
               {
               char *str = va_arg(args, char *);
               count += print_string(str);
              }
              else if  (*format == '%')
              {
               
              count += _putchar(*format);
              }
              else if (*format == 'd' || *format == 'i')
              {
                {
	          int num = va_arg(args, int);
	          count += len_number(num);
	          fun_number(num);
                }
              }
             else
             {
             count += _putchar(*format);
	     }
      }
      format++;
    }
  va_end(args);
  return count;
}
