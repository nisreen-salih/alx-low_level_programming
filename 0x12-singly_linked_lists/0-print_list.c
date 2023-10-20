#include "lists.h"

/**
 * strlen - string length
 *
 * @c: string
 *
 * Return:  string length
 */

int _strlen(char *c)
{
	int s = 0;

	if (!c)
		return (0);
	while (*c++)
		s++;
	return (s);
}

/**
 * print_list - prints all the elements
 *
 * @h: first node pointer
 *
 * Return: list size
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
