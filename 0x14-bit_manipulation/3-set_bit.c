#include "main.h"

/**
 * set_bit - ets the value of a bit to 0
 *
 * @n: index num
 * @index: bit
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}