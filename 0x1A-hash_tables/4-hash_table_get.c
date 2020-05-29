#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  hash table to look into
 * @key: key you are looking for
 * Return: value associated with the key, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *copy;

	if (ht && key && *key != '\0')
	{
		index = key_index((unsigned char *)key, ht->size);
		copy = ht->array[index];
		while (copy)
		{
			if (strcmp(key, copy->key) == 0)
			{
				return (copy->value);
			}
			copy = copy->next;
		}
		return (NULL);
	}
	return (NULL);
}
