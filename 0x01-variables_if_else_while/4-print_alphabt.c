#include <stdio.h>

/**
 *main - Entry point
 *
 *description : alpha
 *
 *Return 0 
 */

int main(void)
{
	char a = 'a', f='f', r='r';

	while (a <= 'd')
	{
		putchar (a);
		a++;
	}

	while (f <= 'p')
	{
		putchar (f);
		f++;
	}

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	putchar ('\n');
	return (0);
}
