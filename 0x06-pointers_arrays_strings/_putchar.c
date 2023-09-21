#include <unistd>

/**
 * _putchar - writes char
 *
 * @c : input
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
