#include "main.h"
#include <unistd.h>

/**
 * _putchar - write char
 *
 * @c: char
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print string
 *
 * @str: string
 *
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
}

/**
 * _atoi - str to int
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned int r = 0, f, i;

	for (f = 0; !s[f] >= 48 && s[f] <= 57; f++)
	{
		if (s[f] == '-')
		{
			sign = sign * -1;
		}
	}
	for (i = f; s[i] >= 48 && s[i] <= 57; i++)
	{
		r = r * 10;
		r = r + (s[i] - 48);
	}
	return (sign * r);
}

/**
 * p_int - print int
 *
 * @i: int
 *
 * Return: 0
 */

void p_int(unsigned long int i)
{
	unsigned long int d = 1, n, r;

	for (n = 0; i / d > 9; n++, d = d * 10)
	;
	for (; d >= 1; i  = i % d, d = d / 10)
	{
		r = i / d;
		_putchar('0' + r);
	}
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	p_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
