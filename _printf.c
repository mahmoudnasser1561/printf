#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format:the string parmeter passed by the Func.
 *  @...: A variable number of paramters to calculate the sum of.
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter, i, c, num;
	char *str;

	i = 0;
	num = 0;
	va_start(args, format);

	while (*format)
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{
				i++;
			}
				if (*(format + 1) == 'c')
				{
					c = va_arg(args, int);
					 _putchar(c);
					 counter++;
					 format = format + 1;
				}
				else if ((*(format + 1) == '%'))
				{
					_putchar('%');
					counter++;
				}
				else if ((*(format + 1) == 's'))
				{
					str = va_arg(args, char*);
					while (*str)
					{
						_putchar(*str);
						counter++;
						str++;
					}
					format = format + 1;
				}
				else if (*(format + 1) == 'd' || *(format + 1) == 'i')
				{
					_print_number(num);
					counter++;
					format = format + 1;
				}
		}
		else /*if no %*/
		{
			_putchar(*format);
			counter++;
		}
	format++;
	}
	va_end(args);
	return (counter);
}
