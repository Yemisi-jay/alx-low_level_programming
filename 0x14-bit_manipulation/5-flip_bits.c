#include "main.h"

/**
 * flip_bits - funcion that counts the number of bits to change
 * to get from one number to another number
 * @n: first num
 * @m: second num
 *
 * Return: return num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int initial;
	unsigned long int all = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		initial = all >> i;
		if (initial & 1)
			counter++;
	}

	return (counter);
}
