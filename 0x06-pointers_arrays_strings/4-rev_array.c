#include "main.h"

/**
 * reverse_array - this function reverses the content of an array of integers
 * @a: array to be reversed
 * @n: this is the number of elements of array
 *
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
