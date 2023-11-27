#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: file namr
 * @letters: bytes num
 *
 * Return: bytes num
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char buf[READ_BUF_SIZE * 8];
	ssize_t by;

	if (!filename || !letters)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	by = read(f, &buf[0], letters);
	by = write(STDOUT_FILENO, &buf[0], by);
	close(f);
	return (by);
}
