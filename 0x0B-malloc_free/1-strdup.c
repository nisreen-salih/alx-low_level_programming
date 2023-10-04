#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int x = 0, s = 0;
	char *y;

	if (str == NULL)
		return (NULL);
	for (; str[s] != '\0'; s++)
	;

	y = malloc(s * sizeof(*str) + 1);

	if (y == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < s; x++)
			y[x] = str[x];
	}
	return (y);
}
