#include"main.h"

/**
 * get_bit - returns the decimal value of a bit
 * @n: number to check bits indexed
 * @index: index at which to check bit number
 *
 * Return: value of the bit, or -1 if there is an error is printed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
