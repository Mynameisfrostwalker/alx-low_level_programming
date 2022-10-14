#include <stdio.h>
/* 8-print_base16 */

/**
 * main - Print numbers in base 16
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		printf("%x", n);
	putchar('\n');
	return (0);
}

