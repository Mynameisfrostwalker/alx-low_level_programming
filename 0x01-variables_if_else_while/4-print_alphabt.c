#include <stdio.h>
/* 4-print_alphabt */

/**
 * main - Print entire alphabet except q and e
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}

