#include <stdio.h>

/**
 * main - this is the main body of the code
 *
 * Return: this should return 0 when the program is executed
 */

int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
