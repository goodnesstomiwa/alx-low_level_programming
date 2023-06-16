#include <stdio.h>

/**
  * main - Prints all possible combinations of two two-digit numbers
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x, i, k, j;

	for (x = 48; x <= 57; x++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((k + j) > (x + i) &&  k >= x) || x < k)
					{
						putchar(x);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (x + i + k + j == 227 && x == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
