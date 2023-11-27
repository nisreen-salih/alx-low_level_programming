#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 *
 * @ac: arg count
 * @av: arg vec
 *
 * Return: 1 or 0
 */

int main(int ac, char **av)
{
	int f_f = 0, t_f = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	f_f = open(av[1], O_RDONLY);
	if (f_f == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	t_f = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (t_f == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	}
	while ((b = read(f_f, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(t_f, buf, b) != b)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	f_f = close(f_f);
	t_f = close(t_f);
	if (f_f)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, f_f), exit(100);
	}
	if (t_f)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, f_f), exit(100);
	}
	return (EXIT_SUCCESS);
}
