#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}


int main(void)
{
	_puts_recursion("Puts with recursion");
	printf("\n");
	return (0);
}
