#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: input num
 * @y: input exp
 *
 * Return: -1 less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 1)
	
		return (_pow_recursion(x * x, y - 1));
	
}
