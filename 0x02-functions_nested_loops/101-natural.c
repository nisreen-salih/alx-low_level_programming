#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0
 */

int main(void)
{
	int s, n;

	for (n % 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
