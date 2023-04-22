#include "main.h"

void _close(int fd, int fd_copy);

/**
 * main - unction that copies one file to another
 * @argc: argument count
 * @argv: argument ventor
 *
 * Return: 0 success or exit
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to, buffer[1024];
	int fd, fd_copy, rfile, wfile;

	if(argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd = open(file_from, O_RDWR);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_copy = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit (99);
	}
	rfile = read(fd, buffer, 1024);
	wfile = write(fd_copy, buffer, rfile);
	if (wfile != rfile)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	if (close(fd_copy) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
                exit(100);
        }
	return (0);
}
