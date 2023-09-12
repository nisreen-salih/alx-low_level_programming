#include <stdio.h>

/**
 * main - Entry point
 *
 * description : numbers program
 *
 * Return: always 0
 */

int main(void)
{
	char num;

	for (num = 48 ; num < ':' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
