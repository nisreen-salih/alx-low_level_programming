#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : alpha
 *
 * Return: always 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e')
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
