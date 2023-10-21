#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: double pointer head of the linked list.
 * @str: new string to add or store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int n = 0;

	while (str[n])
	n++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	new->len = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
