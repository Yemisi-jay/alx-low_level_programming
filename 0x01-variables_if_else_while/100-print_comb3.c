#include <stdio.h>

/**
 * main - this is the body of the code
 *
 * Return: this should return 0 when the code runs
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i != j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
