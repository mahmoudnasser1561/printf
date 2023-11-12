#ifndef
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int printf_mod(void);
int printf_int(va_list args);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *fromat, ...);
int printf_dec(va_list args);

#endif
