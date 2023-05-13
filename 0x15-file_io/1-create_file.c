#include "main.h"
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: text content
 *
 * Return: 1(success) or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		else
			return (1);
	}
	while (text_content[i] != '\0')
	{
		i++;/* length of text content*/
	}
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	return (1);
}
