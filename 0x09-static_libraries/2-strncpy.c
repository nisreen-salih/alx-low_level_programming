#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest : input
 * @src : input2
 * @n : input
 *
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r;

	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[r] = src[r];

	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
