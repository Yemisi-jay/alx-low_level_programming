#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @dest: this is the destination string
 * @src: this is the source string
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	for (i = 0; dest[i] != '\0' ; i++)
		dest_len++;
	for (i = 0 ; src[i] != '\0' ; i++)
		src_len++;
	for (i = 0 ; i <= src_len ; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
