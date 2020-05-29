#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *c;
	char *comma = "";

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			c = ht->array[i];
			while (c)
			{
				printf("%s'%s': '%s'", comma, c->key, c->value);
				comma = ", ";
				c = c->next;
			}
		}
	}
	printf("}\n");
}
