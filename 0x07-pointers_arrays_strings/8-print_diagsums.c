#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum
 *
 * @a: array
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int l, c1 = 0, c2 = 0;

	for (l = 0; l < size; l++)
	{
		c1 = c1 + a[l];
		c2 = c2 + a[size - l - 1];
		a = a + size;
	}
	printf("%d, ", c1);
	printf("%d\n, ", c2);
}
