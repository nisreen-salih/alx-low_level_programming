#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 *
 * @s: input
 * Return: result
 */

char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] >= 97 && s[l] <= 122)
		{
			s[l] = s[l] - 32;
		}
	}
	return (s);
}
