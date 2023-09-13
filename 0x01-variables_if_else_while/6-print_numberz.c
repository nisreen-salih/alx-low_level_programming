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
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(48 + num);
	}
	putchar('\n');
	return (0);
}
