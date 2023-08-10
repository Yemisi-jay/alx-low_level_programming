#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - this allocates memory
 * @b: the size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
