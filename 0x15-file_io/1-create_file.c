#include "main.h"
/**
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wfile, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600); /* create a file with rw------- permission*/
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		else
			return (1);/*create an empty file*/
	}
	while (text_content[len] != '\0')
	{
		len++;/* get length of text content*/
	}
	wfile = write(fd, text_content, len);
	if (wfile == -1)
		return (-1);
	return (1);
}
