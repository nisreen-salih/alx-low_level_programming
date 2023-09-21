#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest :input
 * @src : input
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a, a1;

	a = 0;

	while (dest[a])
		a++;

	for (a1 = 0; src[a1]; a1++)
		dest[a1++] = src[a1];

	return (dest);
}
