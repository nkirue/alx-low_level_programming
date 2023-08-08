#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_bufferr(char *file);
void close_filee(int fd);

/**
 * create_bufferr - This allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer for storing chars for.
 *
 * Return: The pointer to the newly-allocated buffer.
 */
char *create_bufferr(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_filee - This closes file descriptors.
 * @fd: The file descrip to be closed.
 */
void close_filee(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This copies the contents of a file to another file.
 * @argc: The num of arguments supplied to the program.
l * @argv: An array of pointers to the arg.
 *
 * Return: Returns 0 on success.
 *
 * Description: If the argument cnt is incorrect - exit code 97.
 * If file_from does n't exist or cannot be read - exit code 98.
 * If file_to cann't be created or written to - exit code 99.
 * If file_to or file_from cann't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_bufferr(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(frm, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_filee(frm);
	close_filee(to);

	return (0);
}











