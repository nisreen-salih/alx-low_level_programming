#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int l, x;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (!p)
		return (NULL);
	for (x = 0; x < l; x++)
		p[x] = min++;
	return (p);
}
