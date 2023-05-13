#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters: size of characters to be read
 *
 * Return: text content and byte size or -1(unsuccess)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor, r_file, w_file;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor != -1)
	{
		r_file = read(file_descriptor, buffer, letters);
		if (r_file < 0)
		{
			free(buffer);
			return (0);
		}
		w_file = write(STDOUT_FILENO, buffer, r_file);
		if (w_file == -1)
		{
			free(buffer);
			return (0);
		}
		close(file_descriptor);
	}
	else
		return (0);
	return (w_file);
}
