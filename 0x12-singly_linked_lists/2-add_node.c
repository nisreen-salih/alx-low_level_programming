#include "lists.c"

/**
 * add_node -  adds a new node at the beginning
 *
 * @head: address pointer
 * @str: string
 * Return: size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nh = malloc(sizeof(list_t));

	if (head || nh)
		return (NULL);
	if (str)
	{
		nh->str = strdup(str);
		if (!nh->str)
		{
			free(nh);
			return (NULL);
		}
		nh->len = _strlen(nh->str);
	}
	nh->next = *head;
	*head = nh;
	return (nh);
}
