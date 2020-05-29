#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: key of the has table
 * @key: key to add
 * @value: value of the key
 * Return:  1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (!ht || !ht)
		return (1);
	if (*key == '\0' || !key)
		return (1);
	index = key_index((unsigned char *)key, ht->size);
	new = add_nodeint_end(&ht->array[index], key, value);
	if (new)
		return (0);
	return (1);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @ke: key to add
 * @v: value to add
 * Return: the address of the new element, or NULL if it failed
 */
hash_node_t *add_nodeint_end(hash_node_t **head, const char *ke, const char *v)
{
	hash_node_t *new_end_list;
	hash_node_t *temp = *head;

	new_end_list = malloc(sizeof(hash_node_t));
	if (!new_end_list)
		return (NULL);
	new_end_list->key = strdup(ke);
	new_end_list->value = strdup(v);
	new_end_list->next = NULL;
	if (!*head)
	{
		*head = new_end_list;
	}
	else
	{
		while (temp && temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_end_list;
	}
	return (new_end_list);
}
