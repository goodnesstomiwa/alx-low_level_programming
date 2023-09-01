#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - It returns the number of bits needed to
 * flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

{
	unsigned long int x = 0, count = 0;

	x = n ^ m;
	while (x)
	{
		if (x & 1)
			count++;

		x >>= 1;
	}

	return (count);
}
