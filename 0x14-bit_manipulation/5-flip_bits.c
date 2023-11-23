#include "main.h"

/**
 * flip_bits - returns the number of bits
 *
 * @n: 1st num
 * @m:2nd num
 *
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;
	unsigned int c = 0;

	while (xr)
	{
		if (xr & 1ul)
		{
			c++;
		}
		xr = xr >> 1;
	}
	return (c);
}
