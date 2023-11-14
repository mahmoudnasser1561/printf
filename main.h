#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct format - concerter
 * @ph: type char pointer, pointing at the specifier
 * @f: the conversion specifier function
 */

typedef struct format
{
	char *id;
	int (*f)();
}	convert_match;

int printf_mod(void);
int printf_int(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
int printf_dec(va_list args);
int _putchar(char character);
int _strlen(char *);

#endif
