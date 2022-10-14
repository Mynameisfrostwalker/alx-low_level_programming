#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 0-positive_or_negative */

/**
 * main - Checks if random number is even or odd
 *
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

