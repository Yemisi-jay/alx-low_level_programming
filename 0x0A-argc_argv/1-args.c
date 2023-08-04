#include "main.h"
#include <stdio.h>

/**
 * main - this function prints the number of arguments passed into it
 * @argc: this counts argument
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
