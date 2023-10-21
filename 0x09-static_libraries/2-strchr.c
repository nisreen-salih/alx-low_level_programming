#include "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * @s: string
 * @c: char
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int ch = 0;

	while (s[ch] >= '\0')
	{
		if (s[ch] == c)
			return (s + ch);
	ch++;
	}

	return ('\0');
}
