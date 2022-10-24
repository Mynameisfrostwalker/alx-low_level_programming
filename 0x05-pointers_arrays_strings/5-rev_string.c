#include <stdio.h>

/**
* rev_string -Reverses string
* @s: String
*/

void rev_string(char *s)
{
	int i;
	int j;
	int m;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = i - 1, m = 0; m < j ; j--, m++)
	{
		char n = s[m];

		s[m] = s[j];
		s[j] = n;
	}
}

