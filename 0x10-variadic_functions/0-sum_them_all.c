#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 *
 * @n: arguments num
 * @...: int sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list p;

	if (!n)
	{
		return (0);
	}
	va_start(p, n);
	while (y--)
	{
		x = x + va_arg(p, int);
	}
	va_end(p);
	return (x);
}
