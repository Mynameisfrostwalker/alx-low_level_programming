#include "main.h"

/**
* _strlen - Returns length of string
* @str: String
*
* Return: Length of string
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
* puts_half - Prints half of string to standard output
* @str: String
*/

void puts_half(char *str)
{
	int i;
	int y = _strlen(str);

	for (i = y % 2 == 0 ? y / 2 : (y + 1) / 2; i < y; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

