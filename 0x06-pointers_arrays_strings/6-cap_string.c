#include "main.h"
#include <stdio.h>

/**
 * lower - determine
 *
 * @c : input
 *
 * Return: 1 or 0
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * delimeter - ascii or deliniter
 *
 * @c : input
 *
 * Return: 1 or 0
 */

int delimeter(char c)
{
	int i;

	char del[] = " \t\n, . !?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == del[i])
			return (1);
	}
	return (0);
}


/**
 * cap_string - capitalizes all words of a string
 *
 * @s : input
 *
 * Return: ptr
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int d = 1;

	while (*s)
	{
		if (delimeter(*s))
			d = 1;
		else if (lower(*s) && d)
		{
			*s -= 32;
			d = 0;
		}
		else
			d = 0;
		s++;
	}
	return (ptr);
}
