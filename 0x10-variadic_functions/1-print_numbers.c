#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: str separator
 * @n: num of arg
 * @...: ints to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (x--)
	{
		printf("%d%s", va_arg(p, int),
				x ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
