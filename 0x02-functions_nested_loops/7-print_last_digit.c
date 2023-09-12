#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @a:number to compute last digit
 *
 * Return: last digit
 */

int print_last_digit(int a)
{
	int last_digits;

	last_digits = a % 10;
	if (last_digits < 0)
	{
		last_digits = last_digits * -1;
	}
	_putchar(last_digits + '0');
	return (last_digits);
}
