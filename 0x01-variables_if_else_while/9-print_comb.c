#include <stdio.h>

/**
 * main - this is the main body of the code
 *
 * Return: this should return 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
