#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this functin returns a copy of a string giving as param
 * @str: this is the string to copy
 *
 * Return: return the string copy
 */

char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
