#include "lists.h"

/**
 * listint_len - number of elements to return in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	size_t a = 0;

	while (cur != NULL)
	{
		a += 1;
		cur = cur->next;
	}
	return (a);
}
