#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search
 *
 * Return: address of the node the loop begins otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *j = head;
	listint_t *k = head;

	if (!head)
		return (NULL);

	while (j && k && k->next)
	{
		k = k->next->next;
		j = j->next;
		if (k == j)
		{
			j = head;
			while (j != k)
			{
				j = j->next;
				k = k->next;
			}
			return (k);
		}
	}

	return (NULL);
}
