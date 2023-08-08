#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: A pointer to the filename.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails --1.
 *  Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fdesc, text_content, leng);

	if (fdesc == -1 || wr == -1)
		return (-1);

	close(fdesc);

	return (1);
}
