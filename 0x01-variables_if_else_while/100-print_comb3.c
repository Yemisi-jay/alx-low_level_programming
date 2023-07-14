#include <stdio.h>

/**
 * main - this is the body of the code
 *
 * Return: this should return 0 when the code runs
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(i == 9 && j == 8))
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
