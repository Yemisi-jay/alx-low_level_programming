#include <stdio.h>

/**
 * main - main is the body of the function
 *
 * Return: return 0 when sucessful
 */

int main(void)
{
	int end = 4000000;
	int num1 = 1;
	int num2 = 2;
	int next;
	int sum = 2;

	while (next <= end)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum = sum + next;
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
