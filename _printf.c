#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	typedef struct format
		{
			char *id;
			int (*f)();

		} convert_match;

	convert_match m[][2] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_37},
		{"%d", printf_int},
		{"%i", printf_dec}
	};


	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
                // %d -> [%, o]
		//
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

// for loop -- hard way

	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 5)
		{

			if (m[j]->id[0] == format[i] && m[j]->id[1] == format[i + 1])
			{
				len += m[j]->f(args);
				i = i + 2;
				// goto Here;
			}
			j++;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
/*
 - this code is about catching the right match out of the `convert_match` Array
 - The loop starts backwards _ here we have the right specifiers for all the requested format specifiers
 - m[13].id[0] == format[i] // %
 - m[13].id[1] == format[i + 1] // the character
*/


