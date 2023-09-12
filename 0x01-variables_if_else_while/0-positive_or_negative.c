#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: compare positive or negative
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", &a);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", &a);
	}
	else
	{
		printf("%d is negative\n", &a);
	}

	return (0);
}
