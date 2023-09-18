#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string of the code
 * Return: Length of the character or string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}

