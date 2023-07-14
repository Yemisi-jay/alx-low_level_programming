#include <stdio.h>

/**
 * main - this is the main body of the code
 *
 * Return: this should return 0 at the end of the code
 */

int main(void)
{
	int a;
	char b;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
