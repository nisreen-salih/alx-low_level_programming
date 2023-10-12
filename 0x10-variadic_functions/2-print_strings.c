#include "variadic_functions.h"

/**
 * print_strings  - prints strings
 *
 * @separator: string separator
 * @n: num of args
 * @...: ints to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (x--)
	{
		printf("%s%s", (str = va_arg(p, char *)) ? str : "(nil)",
			x ? (separator ? separator : "") : "\n");
	}
	va_end(p);
}
