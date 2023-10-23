#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of the linked list
 * @head : pointer to the head
 * @index: index of the node to be deleted, index starts 0
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *cop = *head;
unsigned int nd;

if (cop == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(cop);
return (1);
}

for (nd = 0; nd < (index - 1); nd++)
{
if (cop->next == NULL)
return (-1);

cop = cop->next;
}

tmp = cop->next;
cop->next = tmp->next;
free(tmp);
return (1);
}
