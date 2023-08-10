#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in an array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
