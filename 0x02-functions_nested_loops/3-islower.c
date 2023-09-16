#include "main.h"

/**
 * _islower - checks of lowercase
 *
 * @c: check input
 *
 * Return: 1 in lowercase , 0 else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
