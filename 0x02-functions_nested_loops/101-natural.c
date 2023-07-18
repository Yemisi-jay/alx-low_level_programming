#include <stdio.h>

/**
 * main - this function sums multiple of 3 in 5 and number below 1024
 *
 * Return: return 0 if program runs sucessfully
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
