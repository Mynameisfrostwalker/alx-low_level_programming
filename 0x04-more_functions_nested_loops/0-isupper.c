/**
* _isupper - Checks if input is an uppercase letter
* @c: Input
*
* Return: 1 if uppercase letter, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

