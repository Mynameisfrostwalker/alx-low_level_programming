#include "main.h"
/* print_sign */

/**
 * print_sign - Checks if input is positive, negative or zero
 * @n: Character to check
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}

