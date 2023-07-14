#include <stdio.h>

/**
 * main - this is the main function for the code
 *
 * Return: this should return 0 if the code runs successfully
 */

int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}
