#include <stdio.h>

/**
  * main - Prints string
  *
  * Return: 1 on failure, 0 on success
  */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str) - 1, stdout);
	return (1);
}

