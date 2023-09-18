#include "main.h"
/**
 * swap_int - integers swapped
 * @a: swapped integer 1
 * @b: swapped interger 2
 */
void swap_int(int *a, int *b)
{
	int swapnum;

	swapnum = *a;
	*a = *b;
	*b = swapnum;
}

