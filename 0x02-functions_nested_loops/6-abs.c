#include "main.h"

/**
 * _abs - Computers the absolute
 * @c: The number computed
 * Return: Absolute value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_num;

		abs_num = c * -1;
		return (abs_num);
	}
	return (c);
}
