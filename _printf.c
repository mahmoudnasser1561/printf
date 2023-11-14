#include "main.h"
/**
 * _printf - is a function that takes the format and selects the correct function to print
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_mod},
		{"%d", printf_int},
		{"%i", printf_dec}
	};


va_list arguments;
int i = 0, j, len = 0;

va_start(arguments, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

while (format[j] != '\0')
{
	i = 0;
	while (i <= 5)
	{
		if (m[i]->id[0] == format[j] && m[i]->id[1] == format[j + 1])
		{
			len += m[i]->f(args);
		}
		i++;
	}
	_putchar(format[i]);
	len++;
	i++;
}
	va_end(args);
	return (len);
}
