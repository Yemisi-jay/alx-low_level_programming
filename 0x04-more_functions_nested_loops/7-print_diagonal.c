#include "main.h"

/**
 * print_diagonal - this prints diagonal character
 * @n: number of times '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0 ; x < n ; x++)
	{
	for (y = 0 ; y < x ; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
