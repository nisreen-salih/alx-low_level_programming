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
	int l = 0, sum1 = 0, sum2 = 0;

	while (l < size)
	{
		sum1 = sum1 + a[l];
		sum2 = sum2 + a[size - l - 1];
		a = a + size;
		l++;
	}
	printf("%d, ", sum1);
	printf("%d\n, ", sum2);
}
