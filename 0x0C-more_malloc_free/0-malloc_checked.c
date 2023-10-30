#include <stdlib.h>
#include "main.h"


/**
  * *malloc_checked - memory allocated
  * @b: number of byte
  * Return: A pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
