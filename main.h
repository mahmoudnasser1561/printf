#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD

=======
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
>>>>>>> a9176d05046aecdd018979c9e14fa72888b6e576

int printf_37(void);
int printf_int(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
int printf_dec(va_list args);
<<<<<<< HEAD

=======
int _putchar(char character);
int _strlen(char *);
>>>>>>> a9176d05046aecdd018979c9e14fa72888b6e576

#endif
