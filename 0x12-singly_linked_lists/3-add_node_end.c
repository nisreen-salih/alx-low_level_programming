#include "lists.h"

/**
 * add_node_end -  adds a new node at the end
 *
 * @head: address pointer
 * @str: string
 *
 * Return: size
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn = malloc(sizeof(list_t));
	list_t *n = *head;

	if (!head || !nn)
	{
		return (NULL);
	}
	if (str)
	{
		nn->str = strdup(str);
		if (!nn->str)
		{
			free(nn);
			return(NULL);
		}
		nn->len = _strlen(nn->str);
	}
	if (n)
	{
		while (n->next)
			n = n->next;
	}
	else
	{
		*head = nn;
	}
	return (nn);
}
