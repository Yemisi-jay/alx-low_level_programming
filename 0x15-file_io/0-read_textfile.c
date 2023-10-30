#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads text file print to STDOUT
 * @filename: textfile to read
 * @letters: num of letters to read
 * Return: return actual number of bytes read and printed otherwise
 *        0 when function fails or file is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_descriptor;
	ssize_t w;
	ssize_t i;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(file_descriptor, buf, letters);
	w = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(file_descriptor);
	return (w);
}
