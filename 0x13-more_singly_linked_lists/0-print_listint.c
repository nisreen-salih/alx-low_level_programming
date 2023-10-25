#include "lists.h"

/**
 * print_listint - prints all the elements
 *
 * @h: first node pointer
 *
 * Return: list size
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
