#include "main.h"

/**
 * print_diagonal - this prints diagonal line on the terminal
 * @n: the parameter that assumes the numer of times to print \
 *
 * Return: return o
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j <= i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
