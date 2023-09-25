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

	do {
		if (s[ch] == c)
			return (s + ch);
	ch++;
	}
	while (s[ch] >= '\0');
	return ('\0');
}
