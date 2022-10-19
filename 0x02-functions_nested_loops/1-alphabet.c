#include "main.h"
/* print_alphabet */

/**
 * print_alphabet - Prints the Alphabet
 *
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar((char) i);
	}
	_putchar('\n');
}

