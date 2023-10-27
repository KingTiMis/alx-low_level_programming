#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: binary numbers to be printed eq to base ten
*
*/

void print_binary(unsigned long int n)
{
	int z, val = 0;
	unsigned long int current;

	for (z = 63; z >= 0; z--)
	{
		current = n >> z;

		if (current & 1)
		{
			_putchar('1');
			val++;
		}
		else if (val)
			_putchar('0');
	}
	if (!val)
		_putchar('0');
}
