#include "main.h"

/**
 * get_endianness -To check for  endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *y;

	x = 1;
	y = (char *) &x;

	return ((int)*y);
}
