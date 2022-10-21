#include "main.h"

/**
* print_diagonal - Prints diagonal
* @n: Length of diagonal to be printed
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 1; j < i + 1; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

	if (i == 0)
	{
		_putchar('\n');
	}
}

