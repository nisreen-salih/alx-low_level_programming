#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 *
 * @s: pointer
 * @b: const
 * @n: max
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; n > 0; l++)
	{
		s[l] = b;
		n--;
	}

	return (s);
}
