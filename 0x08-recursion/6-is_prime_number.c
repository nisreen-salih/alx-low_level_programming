#include "main.h"

/**
 * _prime - finds prime
 *
 * @n: number
 * @x: check
 *
 * Return: 0 or -1
 */

int _prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (x < n && n % x == 0)
		return (0);
	if (x < n && n % x != 0)
		return (_prime(n, x + 1));
	else
		return (1);
}

/**
 * is_prime_number - check for prime
 *
 * @n: integer
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
