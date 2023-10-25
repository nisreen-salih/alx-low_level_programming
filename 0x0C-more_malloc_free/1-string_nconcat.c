#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer first
 * @s2: pointer second
 * @n: num
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, s1l, s2l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;
	s = malloc(s1l + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		s[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		s[x] = s2[y];
		x++;
	}
	s[x] = '\0';
	return (s);
}
