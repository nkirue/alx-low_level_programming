#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 1 at a given index.
 * @n: The pointer to the number to change
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: Returns 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

