#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns the num of elements in linked list
 * @h: Pointer to list
 *
 * Return: return the num of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

