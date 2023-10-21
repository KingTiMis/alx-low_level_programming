#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the linked list.
 * @str: string to add or store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	unsigned int n = 0;

	while (str[n])
	n++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
	*head = new;
	return (new);
	}

	while (current->next)
	current = current->next;

	current->next = new;

	return (new);
}
