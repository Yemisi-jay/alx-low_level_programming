#include "main.h"

/**
 * puts_half - this function prints the second half of the string
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;
	int lenght = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		lenght++;
	j = (lenght - 1) / 2;
	for (i = j + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
