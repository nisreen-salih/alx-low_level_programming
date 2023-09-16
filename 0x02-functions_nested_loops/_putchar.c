#include <unistd>
#include "main.h"

/**
 * _putchar - write the char x
 * @x: the char to print
 *
 * Return: On success 1
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
