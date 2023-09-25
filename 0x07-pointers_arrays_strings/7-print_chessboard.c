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

	for (b < 8; b++;)
	{
		for (w < 8; w++;)
		{
			_putchar(a[b][w]);
		}
		_putchar('\n');
	}

}
