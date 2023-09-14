#include <stdio.h>

/**
* main - Entry point
*
* Description : hexadecimal numbers
*
* Return: always 0
*/

int main(void)
{
	int s;
	char r;

	for (s = '0' ; s <= '9' ; s++)
	{
		putchar(s);
	}

	for (r = 'a' ; r <= 'f' ; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
