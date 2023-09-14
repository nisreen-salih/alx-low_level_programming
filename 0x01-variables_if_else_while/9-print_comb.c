#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : num separeted by comma
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(48 + num);
		if (num == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
