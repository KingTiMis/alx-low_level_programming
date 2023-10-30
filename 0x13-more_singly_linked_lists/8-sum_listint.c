#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - cal the sum of all the data (n) in the linked list
 * @head : pointer to the head
 * Return: sum of all the data (n),
 */
int sum_listint(listint_t *head)
{
int adding;

adding = 0;

while (head)
{
adding += head->n;
head = head->next;
}
return (adding);
}
