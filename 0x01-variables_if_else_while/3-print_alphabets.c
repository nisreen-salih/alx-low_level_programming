#include <stdio.h>

/**
 * main - Entry point
 *
 * description: alphabets
 *
 * Return: always 0
 */

int main(void)
{
	char up = 'A';
	char low = 'a';

	while (low <= 'z')
	{
		putchar (low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar (up);
		up++;
	}
	putchar('\n');
	return (0);
}
