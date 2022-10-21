#include "main.h"

/**
* print_triangle - Prints triangle
* @n: Height of triangle to be printed
*/

void print_triangle(int n)
{
	int i;
	int j;
	int m;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			_putchar(' ');
		}

		for (m = 0; m < i + 1; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (i == 0)
	{
		_putchar('\n');
	}
}

