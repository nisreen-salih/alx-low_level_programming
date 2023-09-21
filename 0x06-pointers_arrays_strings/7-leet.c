#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s : input
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	char *cp = s;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(k) / sizeof(char); i++)
		{
			if (*s == k[i] || *s == k[i] + 32)
			{
				*s = 48 + v[i];
			}
		}
		s++;
	}
	return (cp);
}
