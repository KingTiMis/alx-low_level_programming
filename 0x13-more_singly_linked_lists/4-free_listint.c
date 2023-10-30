#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of the list of your content
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
