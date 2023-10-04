#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments of your program follow a with newline.
 * @ac: Argument count
 * @av: Double pointer to an array of strings passed to main.
 *
 * Return: Pointer to the new string, or NULL if fail.
 */
char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int b, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0, total = 0; b < ac; b++)
	{
		for (j = 0; *(*(av + b) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (b = 0; b < ac; b++)
	{
		for (j = 0; av[b][j] != '\0'; j++)
		{
			*a = av[b][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
