#include "main.h"

/**
 *  reverse_array - reverses the content of an array of integers
 *
 *  @a: input
 *  @n: input
 *
 *  Return: result
 */

void reverse_array(int *a, int n)
{
	int i, b, c;

	for (i = 0, b = (n - 1); i < b; i++, b--)
	{
		c = i[a];
		a[i] = a[b];
		a[b] = c;
	}
}
