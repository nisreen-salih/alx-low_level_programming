#include "lists.h"

/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list
 *
 * @head: first node pointer
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
