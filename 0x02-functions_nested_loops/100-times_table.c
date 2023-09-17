#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: input
 */

void print_times_table(int n)
{
	int p, t, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (t = 1; t <= n; t++)
			{
				_putchar(',');
				_putchar(' ');

				p = num * t;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
