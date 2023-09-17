#include "main.h"

/*
 * _isalpha - checks for alphabets
 *
 * @c : input
 *
 *Return: 1 if c i letter 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
