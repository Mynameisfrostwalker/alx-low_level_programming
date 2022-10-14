#include <stdio.h>
/* 101-print_comb4 */

/**
 * main - Print all possible combinations of three digit numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48 + i - 47; n < 58; n++)
		{
			for (j = 48 + n - 47; j < 58; j++)
			{
				putchar(i);
				putchar(n);
				putchar(j);
				if (i != 55 || n != 56 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

