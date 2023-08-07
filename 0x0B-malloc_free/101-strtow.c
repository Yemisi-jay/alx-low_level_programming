#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - function that locates the index setting the end of the first
 * word contained in the string
 * @str: string to the searched
 *
 * Return: return the index setting the end of the initial word pointed
 * to by str
 */
int word_len(char *str)
{
	int index = 0, lenght = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		lenght++;
		index++;
	}
	return (lenght);
}

/**
 * count_words - tis counts the number of words contained in a string
 * @str: string to be searched
 *
 * Return: return number of words in str
 */

int count_words(char *str)
{
	int index = 0, words = 0, lenght = 0;

	for (index = 0 ; *(str + index); index++)
		lenght++;
	for (index = 0 ; index < lenght ; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - this splits a string into two words
 * @str: the string to be splited
 *
 * Return: return NULL if str == NULL or str == "" or if function fails
 * else re turn a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, i,  letters, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (i = 0 ; i < words ; i++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[i] = malloc(sizeof(char) * (letters + 1));

		if (strings[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(strings[i]);

			free(strings);
			return (NULL);
		}
		for (j = 0 ; j < letters ; j++)
			strings[i][j] = str[index++];

		strings[i][j] = '\0';
	}
	strings[i] = NULL;

	return (strings);
}
