#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: first nide pointer
 * @idx: index
 * @n: new node
 *
 * Return: new node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (x == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		x++;
		node = node->next;
	}
	free(new);
	return (NULL);
}
