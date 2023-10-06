#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in the array.
 *
 * Description:
 * This function allocates memory for an array containing 'nmemb' elements,
 * where each element has a size of 'size' bytes. It initializes all elements
 * to zero.
 *
 * Return:
 * - A pointer to the allocated memory.
 * - NULL if 'nmemb' or 'size' is 0, or if memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
