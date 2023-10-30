#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the newly duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	duplicate  = malloc(i * sizeof(*duplicate) + 1);
	if (duplicate == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		duplicate[c] = str[c];
	duplicate[c] = '\0';

	return (duplicate);
}
