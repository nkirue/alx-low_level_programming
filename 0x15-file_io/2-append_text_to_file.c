#include "main.h"

/**
 * append_text_to_file -a function that appends text at the end of a file
 * @filename: The pointer to the name of the file.
 * @text_content: The text to add to the end of the file.
 *
 * Return: Returns if the function fails or filename is NULL - -1.
 *         If the file doesn't exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
