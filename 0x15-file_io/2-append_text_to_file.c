#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to name of the file
 * @text_content: string to add to the end of file
 *
 * Return: return -1 if function fails or filename is NULL
 * if file does not exist the user lacks write permissions return -1,
 * otherwise return 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(i, text_content, lenght);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
