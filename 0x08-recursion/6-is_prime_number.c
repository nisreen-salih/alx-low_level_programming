#include "main.h"

/**
 * _prime - check if prime number
 *
 * @n: num
 * @x: check
 *
 * Return: 0 or 1
 */

int _prime(int n, int x)
{
	if (n == 1 || n == -1)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (x < n && n % x == 0)
		return (0);
	if (x < n && n % x != 1)
		return (1);
}

/**
 * is_prime_number - integer is a prime number, otherwise return 0
 *
 * @n: number
 *
 * Retun: 1 or 0
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
