#include "main.h"
/**
 * _strlen - strength length
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	if (!s)
	{
		return (0);
	}

	while (*s++)
	{
		c++;
	}

	return (c);
}

/**
 * append_text_to_file -  appends text at the end of a file
 *
 * @filename: file name
 * @text_content: content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t by = 0, leng = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}

	if (leng)
	{
		by = write(f, text_content, leng);
	}
	close(f);
	return (by == leng ? 1 : -1);
}
