#include <stdio.h>

/**
 * _sqrt - sqr root
 *
 * @x: input
 *
 * Return: sqrt of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds  largest prime factor
 *
 * @n: num to find
 */

void largest_prime_factor(long int n)
{
	int pr, large;

	while (n % 2 == 0)
		n = n / 2;

	for (pr = 3; pr <= _sqrt(n); pr++)
	{
		while (n % pr == 0)
		{
			n = n / pr;
			large = pr;
		}
	}
	if (n > 2)
		large = n;
	printf("%d\n", large);
}

/**
 * main - Entry point
 *
 * Description : finds and prints the largest prime factor
 *
 * Return: always 0
 */

int main(void)
{
	largest_prime_factor(612852475143);
}
