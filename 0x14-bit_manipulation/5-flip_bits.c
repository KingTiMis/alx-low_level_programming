#include "main.h"

/**
* flip_bits - function that counts the number of bits to be changed
* @n: number to be changed to another number
* @m: number to be changed after n
* Return: Number of bits changed are returned
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, cnt = 0;
	unsigned long int current;
	unsigned long int ex = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = ex >> z;
		if (current & 1)
			cnt++;
	}

	return (cnt);
}
