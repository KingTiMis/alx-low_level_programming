#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head
 * Return: head node's data (n)
 * or 0 - return empty linked list
 */
int pop_listint(listint_t **head)
{
listint_t *tem;
int n;

tem = *head;

if (tem == NULL)
return (0);

*head = tem->next;
n = tem->n;
free(tem);
return (n);
}
