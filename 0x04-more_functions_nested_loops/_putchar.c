#include <unistd>
#include "main.h"

/**
 * _putchar - write the char x
 * @c: the char to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
