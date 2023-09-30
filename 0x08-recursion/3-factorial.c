#include "main.h"

/**
 * factorial - the factorial of a given number
 *
 * @n: num
 *
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
