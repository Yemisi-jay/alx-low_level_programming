#include "main.h"

/**
 * print_binary - function that prints binary equivalent of a decimal number
 * @n: num to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int initial;

	for (i = 63; i >= 0; i--)
	{
		initial = n >> i;

		if (initial & 1)
		{

			_putchar('1');

			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
