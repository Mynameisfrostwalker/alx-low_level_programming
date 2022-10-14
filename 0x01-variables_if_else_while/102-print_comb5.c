#include <stdio.h>
/* 102-print_comb5 */

/**
 * main - Print all possible combinations of two two digit numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int j;
	int k;
	int m;
	int y;

	for (n = 48; n < 58; n++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = n, y = n; k < 58; k++, y = n + 1 + j - 48)
			{
				for (m = 48 + j - y + n - 47; m < 58; m++)
				{
					putchar(n);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);
					if (n != 57 || j != 56 || k != 57 || m != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

