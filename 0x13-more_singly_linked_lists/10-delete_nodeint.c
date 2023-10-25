#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: first node pointer
 * @index: index to delete
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *p;
	unsigned int x = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (!index)
	{
		n = *head;
		*head = (*head)->next;
		free(n);
		return (1);
	}
	n = *head;
	while (n)
	{
		if (x == index)
		{
			p->next = n->next;
			free(n);
			return (1);
		}
		x++;
		p = n;
		n = n->next;
	}
	return (-1);
}
