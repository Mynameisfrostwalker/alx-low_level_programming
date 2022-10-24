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
* puts2 - Prints every other character in string to standard output
* @str: String
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

