#include <stdio.h>

/**
 * main - this is the body of the code
 *
 * Return: this return 0 when the code is executed
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
