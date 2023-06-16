#include <stdio.h>

/**
  * main - Prints all the numbers of base 16 in lowercase
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
