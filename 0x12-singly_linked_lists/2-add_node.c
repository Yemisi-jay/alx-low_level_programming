#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds a new node at the start of a linked list
 * @head: double pointer to list_t list
 * @str: the new string to add
 *
 * Return: return address of new element otherwise NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

