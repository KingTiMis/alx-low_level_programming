#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of char and initializes it with a specific character.
 * @size: Size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: Pointer to the created array (Success), NULL (Error).
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	array[i] = '\0';

	return (array);
}
