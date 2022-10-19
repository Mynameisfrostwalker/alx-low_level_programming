#include "main.h"
/* _isalpha */

/**
 * _isalpha - Checks if input is Uppercase
 * @c: Character to check
 *
 * Return: 1 if lowercase, 0 if not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}

	return (0);
}

