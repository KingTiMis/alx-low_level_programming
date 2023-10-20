#include <stdio.h>
#include "lists.h"


/**
 * print_list - print element in singly linked list
 *
 * @h: is the head list
 * Return: total number of nodes list
 */
size_t print_list(const list_t *h)
{
	int s;

	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
