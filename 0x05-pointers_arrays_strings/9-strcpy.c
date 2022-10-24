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
* _strcpy - Copies string pointed to by source to buffer pointed by dest
* @dest: Destination buffer
* @src: Source string
*
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int y = _strlen(src);

	for (i = 0; i <= y; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

