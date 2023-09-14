#include "main.h"

/**
 * _isupper - run uppercase
 *
 * @c: as character to check
 *
 * Return: 1 if uppercase, or else 0 as otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
