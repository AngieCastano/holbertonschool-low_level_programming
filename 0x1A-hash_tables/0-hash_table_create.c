#include "hash_tables.h"

/**
 * hash_table_create -creates a hash table.
 * @size: hash table array size
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t *));
	if (!ht)
	{
		free(ht);
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		free(ht->array);
		return (NULL);
	}
	return (ht);
}
