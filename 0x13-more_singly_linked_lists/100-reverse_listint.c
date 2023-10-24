#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 *	1 if succeeded, -1 if it failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c;
	listint_t *n;

	c = NULL;
	n = NULL;

	while (*head != NULL)
	{
		c = (*head)->next;
		(*head)->next = c;
		c = *head;
		*head = n;
	}

	*head = c;
	return (*head);
}
