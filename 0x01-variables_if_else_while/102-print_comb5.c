#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: return 0 when the code runs sucessfully
 */

int main(void)
{
	int tens_1, ones_1, tens_2, ones_2;

	for (tens_1 = 0; tens_1 < 10; tens_1++)
	{
		for (ones_1 = 0; ones_1 < 10; ones_1++)
		{
			for (tens_2 = tens_1; tens_2 < 10; tens_2++)
			{
				int start = (tens_1 == tens_2) ? ones_1 + 1 : 0;

				for (ones_2 = start; ones_2 < 10; ones_2++)
				{
					putchar(tens_1 + '0');
					putchar(ones_1 + '0');
					putchar(' ');
					putchar(tens_2 + '0');
					putchar(ones_2 + '0');

					if (tens_1 != 9 || ones_1 != 8 || tens_2 != 9 || ones_2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
