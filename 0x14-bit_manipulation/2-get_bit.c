#include "main.h"

/**
 * get_bit - value of a bit at a given index
 *
 * @n: index num
 * @index: bit
 *
 * Return: bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (n >> index & 1);
}
