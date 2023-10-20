#include "lists.h"

/**
 * list_len - returns the number of elements
 *
 * @h: pointer
 *
 * Return: list size
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
