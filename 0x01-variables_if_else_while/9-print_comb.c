#include <stdio.h>

/**
  * main - Prints single-digit numbers with commas and space
  *
  * Return: Always 0 (Success);
  */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
