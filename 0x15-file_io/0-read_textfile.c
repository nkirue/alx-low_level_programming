#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: The textfile to be read
 * @letters: the number of letters it should read and print
 * Return: w-the actual number of letters it could read and print
 *        Return 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdesc;
	ssize_t wr;
	ssize_t tr;

	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tr = read(fdesc, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tr);

	free(buffer);
	close(fdesc);
	return (wr);
}




