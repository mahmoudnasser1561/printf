#include "main.h"
/**
 * _strlen -finds the length of a string.
 * @s: string
 * Return: an integer.
 */
int _strlen(char *s)
{
	int c;
	for (c = 0; s[c] != 0; c++)
	;
	return (c);
}
