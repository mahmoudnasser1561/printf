#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format:the string parmeter passed by the Func.
 *  @...: A variable number of paramters to calculate the sum of.
 * Returns: the number of characters printed excluding \0
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter, c, num;
	char *str;
	va_start (args, format);

	while (*format)
	{
		if (*format == '%')
		{    
			format++; /*look at whats next to the %*/
				if (*format == 's')
				{
					char *str = va_arg(args, char*)
					while(*str)
					_putchar(*str);
					counter++;
				}
				else if (*format == 'c')
				{
					int c = va_arg(args, int)
					_putchar(c);
					counter++;
				}
				else if (*format == 'i' || *format == 'd')
				{
					num = va_arg(args, int)
					_putchar(num);
					counter++;
				}
				else if (*format == '%')
				{
					_Putchar('%')
					counter++;
				}
		}
		else	/*if no %*/
		{
			_putchar(*format);
			counter++;
		}
	format++;
	}
	va_end(args);
	return (counter);
}
