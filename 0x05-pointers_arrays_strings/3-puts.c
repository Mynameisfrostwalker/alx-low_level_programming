#include "main.h"

/**
* _puts - Prints tring to standard output
* @str: String
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

