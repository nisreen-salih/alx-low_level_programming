#include "main.h"
/**
 * *_mset - memory byte
 *
 * @c: pointer
 * @a: const
 * @m: max bytes
 *
 * Return: c
 */

char *_mset(char *c, char a, unsigned int m)
{
	char *p = c;

	while (m--)
		*c++ = a;

	return (p);
}

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: element size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_mset(m, 0, sizeof(int) *  nmemb);

	return (m);
}
