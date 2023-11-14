#include "main.h"

/**
* printf_int - prints an integer
* @args: arguments to print
* Return: number of characters printed
*/

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10;
	int digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i++;
	}
	if (um > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (1);
}

#include "main.h"

/**
* print_dec - prints a decimal
* @args: arguments to print
* Return: number of characters printed
*/

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10;
	int digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i++;
	}
	if (um > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (1);
}
