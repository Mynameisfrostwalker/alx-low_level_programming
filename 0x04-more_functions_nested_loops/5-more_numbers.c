#include "main.h"

/**
* more_numbers - Print numbers from 0 to 14 ten times
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int m = j / 10;
			int n = j % 10;

			if (m != 0)
			{
				_putchar('0' + m);
			}

			_putchar('0' + n);
		}
		_putchar('\n');
	}
}

