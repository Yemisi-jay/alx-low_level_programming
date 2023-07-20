#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: this is the parameter which represent number of _ to be printed
 *
 * Return: return 0
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
