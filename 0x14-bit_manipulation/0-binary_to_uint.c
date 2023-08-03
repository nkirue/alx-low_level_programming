#include "main.h"

/**
 * binary_to_uint - Func that converts a binary number to unsigned int
 * @b: A pointer of string containing the binary number
 *Nkiru
 * Return: Return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decval = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decval = 2 * decval + (b[j] - '0');
	}

	return (decval);
}

