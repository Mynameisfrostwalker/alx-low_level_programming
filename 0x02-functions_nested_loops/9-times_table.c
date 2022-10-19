#include "main.h"
/* 9-times_table */

/**
 * times_table - Prints nine times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int m = i * j;
			int a = m / 10;
			int b = m % 10;

			if (a != 0)
			{
				_putchar('0' + a);
			}
			_putchar('0' + b);

			if (j != 9)
			{
				_putchar(',');

				if (a == 0 && ((i * (j + 1)) / 10) == 0)
				{	
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

