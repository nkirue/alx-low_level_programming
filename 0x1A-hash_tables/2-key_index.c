#include "hash_tables.h"

/**
 * key_index - Get index for key given
 * @key: Key (string) to hash
 * @size: size of hash table
 *
 * Return: Index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
