#include "main.h"

/**
 * Print alphabet_x10 - Make alphabet x10 times
  *
  * Return: Always 0 
  */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}

		_putchar('\n');

		i++;
	}
}
