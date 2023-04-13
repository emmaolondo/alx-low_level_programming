#include "main.h"
/**
 * append_text_to_file - a function that append text at the end of file
 * @filename: file descriptor
 * @text_content: contents of a file
 *
 *
 * Return: 1(success) or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wfile, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	/* create a file that adds content at the end of file*/
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		else
			return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;/* get length of text content*/
	}
	wfile = write(fd, text_content, len);
	if (wfile == -1)
		return (-1);
	close(fd);
	return (1);
}
