#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used
 *
 * Return: address to new element NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
	new->next = *head;
	*head = new;
	return (new);
}
