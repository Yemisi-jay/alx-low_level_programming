#include "lists.h"

/**
 * add_nodeint - function that adds a new node at start of a linked list
 * @head: pointer to first node in the list
 * @n: data to put in that new node
 *
 * Return: return pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));
	if (!start)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
