#include <stdio.h>

/**
  * main - prints main program
  * Return: always great
  */

int main(void)
{
	int a, z = 0;

	while (a < 1028)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	z += a;
	}
	a++;
	}
	printf("%d\n", z);
	return (0);
}
