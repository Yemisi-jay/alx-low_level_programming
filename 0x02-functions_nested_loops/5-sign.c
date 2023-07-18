#include "main.h"

/**
 * print_sign - this prints the sign of a number
 * @n: this is the number to be checked
 *
 * Return: return 1 for positive num, -1 for neative num or 0 for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
