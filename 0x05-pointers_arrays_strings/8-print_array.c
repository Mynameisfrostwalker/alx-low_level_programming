#include <stdio.h>

/**
* print_array - Prints array
* @a: Pointer to array
* @n: Size of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

