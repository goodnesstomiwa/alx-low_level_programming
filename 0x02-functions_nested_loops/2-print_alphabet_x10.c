#include "main.h"

/**
 * Print alphabet_x10 - Make alphabet x10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');
	}
}
