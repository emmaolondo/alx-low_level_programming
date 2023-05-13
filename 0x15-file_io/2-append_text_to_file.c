#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - adds content to the end of a file
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1(success) or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i;

	i = 0;

	if (filename == NULL)
		return (-1);

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
	while (text_content[i] != '\0')
	{
		i++;/* length of text content*/
	}
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
