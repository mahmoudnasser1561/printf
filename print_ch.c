#include "main.h"
#include <stdarg.h>

/**
* print_ch - prints a character
* @val: arguments
* Return: 1.
*/
int print_char(val)
// (va_list) -> means that it takes a variable argument list
//  which is often used in functions that can accept a variable number of arguments.
{
    char s;

// takes the charcter argument from the argument list and
     va_list arguments;

     va_start(arguments, val);     // started
     s = va_arg(val, int)          // passed
     va_end(val);                  // cleaned

    _putchar(s);
    return (1);
}
