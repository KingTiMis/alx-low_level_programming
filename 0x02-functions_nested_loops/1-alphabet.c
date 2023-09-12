#include "main.h"

/**
 * print_alphabet - the main alphabet of the for _putchar
 * Return: void in this code
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
