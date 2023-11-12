#include "main.h"

/**
 * _putchar - this function writes a character
 * @character: it is the character to be printed
 * Return: 1 in case of success an -1 in case of error
 *
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
