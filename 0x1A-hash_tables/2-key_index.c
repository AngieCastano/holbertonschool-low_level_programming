#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: hash
 * @size: array size
 * Return:  index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!size)
		return (0);
	index = (hash_djb2((unsigned char *)key) % size);
	return (index);
}
