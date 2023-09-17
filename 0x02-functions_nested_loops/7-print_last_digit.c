#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @n : input
 *
 * Return: always l
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
	}
	else
	{
		l = n % 10;
	}
	_putchar(l + '0');
	return (l);
}
