#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
void _print_number(int n);
int _strlen(char *s);
unsigned int handl_buf(char *buf, char c, unsigned int Inbuf);
int print_buf(char *buf, unsigned int nbuf);

#endif

