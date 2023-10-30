#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * @head : pointer to the head of the list
 * @idx  : index of the list where the new node will be added
 *         index starts at 0
 * @n    : value for the new node to be added
 * Return: pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *tem = *head;
unsigned int nd;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = tem;
*head = new_node;
return (new_node);
}

for (nd = 0; nd < (idx - 1); nd++)
{
if (tem == NULL || tem->next == NULL)
return (NULL);

tem = tem->next;
}

new_node->next = tem->next;
tem->next = new_node;

return (new_node);
}
