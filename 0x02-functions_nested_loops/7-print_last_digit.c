#include "main.h"

/**
 * print_last_digit - this prints the last digit of a number
 * @n: this is the number to be printed
 *
 * Return: this should return the value of the last digit of number
 */

int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
	{
	last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
