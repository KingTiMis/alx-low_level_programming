#include "main.h"

/**
  * reverse_array - reverse the contents of an array of integers
  *
  * @a: array integer
  *
  * @n: number of elements in array
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}

