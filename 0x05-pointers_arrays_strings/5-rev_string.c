#include "main.h"

/**
 * rev_string - this function reverses a string
 * @s: this is the variable to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int lenght = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		lenght++;
	for (a = 0 ; a < lenght / 2 ; a++)
	{
		char b;

		b = s[a];
		s[a] = s[lenght - 1 - a];
		s[lenght - 1 - a] = b;
	}

}
