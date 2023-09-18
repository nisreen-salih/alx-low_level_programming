#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: always  0
 */

void print_numbers(void)
{
	int a = 0;

	while (a >= 0 && a <= 9)
	{
		_putchar(a + 48);
		a++;
	}
	_putchar('\n');
}
