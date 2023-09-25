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
	int l = 0, c1 = 0, c2 = 0;

	while (l < size)
	{
		c1 += a[l];
		c2 += a[size - l - 1];
		a += size;
		l++;
	}
	printf("%d, ", c1);
	printf("%d\n, ", c2);
}
