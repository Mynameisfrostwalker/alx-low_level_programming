#include "main.h"

/**
* print_rev - Prints reverse of a string
* @s: String
*/

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

