/**
* _strlen - Calculates the length of input string
* @s: Input
*
* Return: Length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

