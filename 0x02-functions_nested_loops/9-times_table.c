#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int n, t, p;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);
		for (t = 1; t < 10; t++)
		{
			_putchar('.');
			_putchar(' ');

			p = n * t;

			if (p  < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + 48);
			}
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
