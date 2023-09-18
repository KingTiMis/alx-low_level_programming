#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` is the number of elements off array to be printed
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated with or by comma and space.
 * Numbers should be displayed in the same order as they are stored in array.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
