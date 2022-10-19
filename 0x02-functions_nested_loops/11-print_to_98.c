#include "main.h"
#include <stdio.h>
/* print_to_98 */

/**
 * print_to_98 - Prints from input to 98
 * @n: Input
 *
 */
void print_to_98(int n)
{
	int i;
	int m = 98 - n;

	for (i = n; m >= 0 ? i <= 98 : i >= 98; m >= 0 ? i++ : i--)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}

