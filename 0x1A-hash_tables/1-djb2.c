#include "hash_tables.h"

/**
 * hash_djb2 - This function to compute hash of 'str' using djb2
 * @str: The string to hash
 *
 * Return: Value of 64 bits hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
