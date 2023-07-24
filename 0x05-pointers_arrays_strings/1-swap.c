#include "main.h"

/**
 * swap_int - this function swaps two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
