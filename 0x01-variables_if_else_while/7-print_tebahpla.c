#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : reverse alpha
 *
 * Return: always 0
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
