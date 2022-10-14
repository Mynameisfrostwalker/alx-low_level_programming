#include <stdio.h>
/* 9-print_comb3 */

/**
 * main - Print all possible combinations of two digit numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 48; n < 58; n++)
	{
		for (j = 48 + n - 47; j < 58; j++)
		{
			putchar(n);
			putchar(j);
			if (n != 56 || j != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

