#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: first node pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL, *next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}
	n =  *head;
	*head = NULL;
	while (n)
	{
		next = n->next;
		n->next = *head;
		*head = n;
		n = next;
	}
	return (*head);
}
