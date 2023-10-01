#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: num 
 *
 * Return: num or -1
 */

int _sqrt_recursion(int n)
{
	int x = 0;
	if (n <= 0)
	{
		return -1;
	}
	if (x * x != n)
		x++;
	if (x * x == n)
		return x;
}
