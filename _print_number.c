#include "main.h"

/**
 * _print_number - prints an integer
 *@n: The integer to be printed
 */

void _print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if ((x / 10) > 0)
	{
		_print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
