#include "main.h"

/**
 * set_string - Function sets the value of a pointer to a char
 * @s: pointer to pointer.
 * @to: pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
