#include "main.h"
/* print_last_digit */

/**
 * print_last_digit - Prints last digit of input
 * @n: Input
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int l = ((n >= 0 ? n : -n) % 10);

	_putchar('0' + l);
	return (l);
}

