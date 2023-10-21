#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest : input
 * @src : input
 * @n : input
 *
 * Return: num of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
	return (dest);
}
