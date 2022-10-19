#include "main.h"
/* 24-hours */

/**
 * jack_bauer - Prints every minute of a day
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		int a = i % 10;
		int b = i / 10;

		for (j = 0; j < 60; j++)
		{
			int c = j % 10;
			int d = j / 10;

			_putchar('0' + b);
			_putchar('0' + a);
			_putchar(':');
			_putchar('0' + d);
			_putchar('0' + c);
			_putchar('\n');
		}
	}
}

