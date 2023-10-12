#include "variadic_functions.h"

/**
 * format_int - format int
 *
 * @separator: str separator
 * @p: arg pointer
 */

void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}

#include "variadic_functions.h"

/**
 * format_char - format char
 *
 * @separator: str separator
 * @p: arg pointer
 */

void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}

#include "variadic_functions.h"

/**
 * format_float - format char
 *
 * @separator: str separator
 * @p: arg pointer
 */

void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}

#include "variadic_functions.h"

/**
 * format_str - format char
 *
 * @separator: str separator
 * @p: arg pointer
 */

void format_str(char *separator, va_list p)
{
	char *s = va_arg(p, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
	printf("%s%s", separator, s);
}

/**
 * print_all -  prints anything
 *
 * @format: str format
 */

void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *separator = "";
	va_list p;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_str},
		{NULL, NULL}
	};

	va_start(p, format);
	while (format && format[x])
	{
		y = 0;
		while (tokens[y].token)
		{
			if (format[x] == tokens[y].token[0])
			{
				tokens[y].f(separator, p);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(p);
}
