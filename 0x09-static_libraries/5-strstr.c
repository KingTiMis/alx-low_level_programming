#include "main.h"
#include <stdlib.h>

/**
 * _strstr - function finds the first occurrence a substring
 * @haystack: substring
 * @needle: string
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, a;

	i = 0;
	a = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + a] != '\0' && haystack[i + a] != '\0'
		       && needle[j + a] == haystack[i + a])
		{
			if (haystack[i + a] != needle[j + a])
				break;
			a++;
		}
		if (needle[j + a] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
