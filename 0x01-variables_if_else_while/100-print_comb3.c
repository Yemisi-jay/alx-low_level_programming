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

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			if (!((j == i) || (i > j)))
			{
				putchar(j + '0');
				putchar(i + '0');
				if (!(j == 9 && i == 8))
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
