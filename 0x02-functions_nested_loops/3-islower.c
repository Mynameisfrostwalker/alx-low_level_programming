#include "main.h"
/* _islower */

/**
 * _islower - Checks if input is lowercase
 * @c: Character to check
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}

