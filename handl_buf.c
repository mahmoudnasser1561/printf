#include "main.h"

/**
 * handl_buf - concatenates the charcters in the buffer
 * @buf: buffer pointer
 * @Inbuf: index of buffer pointer
 * Return: index of buffer pointer
 */

unsigned int handl_buf(char *buf, char c, unsigned int Inbuf)
{
	if (Inbuf == 1024)
	{
		print_buf(buf, Inbuf);
		Inbuf = 0;
	}
	buf[Inbuf] = c;
	Inbuf++;
	return (Inbuf);
}
