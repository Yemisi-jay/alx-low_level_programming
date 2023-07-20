#include "main.h"

/*
 * print_most_numbers - this prints numbers fron 0 to 9 not printing 2 and 4
 *
 * Return: return 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');

}
