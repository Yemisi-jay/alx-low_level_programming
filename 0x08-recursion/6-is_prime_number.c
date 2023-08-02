#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - if an integer is a prime number or otherwise
 * @n: integer to check
 *
 * Return: return 1 if prime number, return 0 if not prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - this calculates if a number is a prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if prime number 0 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
