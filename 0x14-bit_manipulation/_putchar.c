#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: Returns On success 1.
 * Returns On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
