#include "main.h"

/**
 * read_textfile - Read a textfile
 * @filename: File to be read
 * @letters:  size of characters
 *
 *
 * Return: print letters and byte size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rfile, wfile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		rfile = read(fd, buffer, letters);
		if (rfile < 0)
		{
			free(buffer);
			return (0);
		}
		wfile = write(STDOUT_FILENO, buffer, rfile);
		if (wfile == -1)
		{
			free(buffer);
			return (0);
		}
		close(fd);
	}
	else
		return (0);

	return (wfile);
}
