#include "main.h"
#include <stddef.h>

/**
 * create_file - this is a function that creates a file
 * @filename: pointer to name of the file to create
 * @text_content: pointer to string to write to the file
 *
 * Return: return -1 if the function fails, otherwise return 1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, w, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_descriptor, text_content, lenght);

	if (file_descriptor == -1 || w == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
