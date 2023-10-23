#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: NULL or void
 */
void free_listint2(listint_t **head)
{
listint_t *tem;

if (head == NULL)
return;

while (*head)
{
tem = *head;
*head = (*head)->next;
free(tem);
}
head = NULL;
}
