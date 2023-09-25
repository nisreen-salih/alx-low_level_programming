#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @n: bytes
 * @src: memory
 * @dest: pointer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		dest[l] = src[l];
	return (dest);
}
