#include "main.h"

/**
 * print_chessboard -  prints the chessboard
 *
 * @a: rows and colomns
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b = 0, w = 0;

	while (b < 8)
	{
		while (w < 8)
		{
			_putchar(a[b][w]);
			w++;
		}
		b++;
		_putchar('\n');
	}

}
