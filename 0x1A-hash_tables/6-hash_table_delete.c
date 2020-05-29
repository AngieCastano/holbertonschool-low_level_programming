#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			free_list(&ht->array[i]);
		}
	}
	free(ht->array);
	printf("Free array\n");
	free(ht);
	printf("Free Hash Table\n");
	ht = NULL;
}

/**
 * free_list -function that frees a list_t list.
 * @head: head of the list
 */
void free_list(hash_node_t **head)
{
	hash_node_t *next_head;

	if (!head)
		return;
	while ((head || (*head)) && (*head)->next)
	{
		next_head = (*head)->next;
		free((*head)->key);
		free((*head)->value);
		free(*head);
		*head = next_head;
	}
	free((*head)->key);
	free((*head)->value);
	free(*head);
	*head = NULL;
}
