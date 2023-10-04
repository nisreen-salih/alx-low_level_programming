#include "main.h"

/**
 * _strl - finf the length
 *
 * @s: string
 *
 * Return: int
 */

int _strl(char *s)
{
	int x = 0;

	for (; s[x] != '\0'; x++)
	;
	return (x);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, i;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	x = _strl(s1);
	y = _strl(s2);
	n = malloc((x + y) * sizeof(char) + 1);
		if (n == 0)
			return (0);

	for (i = 0; i <= x + y; i++)
	{
		if (i < x)
			n[i] = s1[i];
		else
			n[i] = s2[i - x];
	}
	n[i] = '\0';
	return (n);
}
