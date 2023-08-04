#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it reeives
 * @argc: this counts the argument
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
