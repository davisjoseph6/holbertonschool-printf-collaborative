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
       _putchar(*format);
       count++;
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
                 _putchar('%');
                   count++;
              }
               else if  (*format == 'd')
              {
              }
               else if  (*format == 'u')
              {
              }
  }
      format++;
    }
  va_end(args);
  return count;
}
