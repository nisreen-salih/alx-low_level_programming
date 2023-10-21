#include "main.h"

/**
 * _strpbrk - earches a string for any of a set of bytes
 *
 * @s: string
 * @accept:
 *
 * Return: p or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int l = 0, k;
	char *p;

	while (s[l] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[l])
			{
				p  = &s[l];
				return (p);
			}
			k++;
		}
		l++;
	}
	return (0);
}
