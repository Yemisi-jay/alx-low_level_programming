#include "main.h"
#include <stdio.h>

/**
 * print_number - this ia function that prints integer
 * @n: this is the integer to be printed
 * Return: return void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
