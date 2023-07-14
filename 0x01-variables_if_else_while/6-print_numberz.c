#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: this should return 0 when the code is executed
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
