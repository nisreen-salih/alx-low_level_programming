#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: input
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
		_putchar(s[r]);
	_putchar('\n');
}
