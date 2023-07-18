#include <stdio.h>
/**
 * main - program that finds first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: return 0 when sucessful
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sum;
	unsigned long int i;

	printf("%lu, ", num1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", num2);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
