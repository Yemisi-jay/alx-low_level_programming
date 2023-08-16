#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -This function prints name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: return void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

