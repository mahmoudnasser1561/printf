#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int printf_37(void);
int printf_int(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
int printf_dec(va_list args);


#endif
