#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: num 
 *
 * Return: num or -1
 */

int _sqrt(int n, int x)
{
	if (n < (x * x))
		return -1;
	else if (x*x == n)
		return x;
	else
		return (_sqrt(n, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else
		return (_sqrt(n, 0));
}
