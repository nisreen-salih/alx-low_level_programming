#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept:byte
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, k;

	while (s[l] != '\0')
	{
		for (k = 0; accept[k] != s[l]; k++)
		{
			if (accept[k] == '\0')
				return (l);
		}
		l++;
	}
	return (l);
}
