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
	hash_node_t *new, *copy;

	if (!value)
	{
		return (0);
	}
	if (ht && key && *key != '\0')
	{
		index = key_index((unsigned char *)key, ht->size);
		copy = ht->array[index];
		if (update_key(copy, key, value) == 1)
			return (1);
		new = add_nodeint(&ht->array[index], key, value);
		if (new)
			return (1);
	}
	return (0);
}

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @ke: key to add
 * @v: value to add
 * Return: the address of the new element, or NULL if it failed
 */
hash_node_t *add_nodeint(hash_node_t **head, const char *ke, const char *v)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(ke);
	new->value = strdup(v);
	new->next = NULL;
	if (head || *head)
	{
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);
	return (new);
}
/**
 * update_key - looks if a key already exists
 * @head: list head t traverse
 * @compare: string to compare
 * @value: value of the key
 * Return: 1 if it already exists, 0 if it doesn't
 */
int update_key(hash_node_t *head, const char *compare, const char *value)
{
	while (head)
	{
		if (strcmp(compare, head->key) == 0)
		{
			head->value = (char *) value;
			return (1);
		}
		head = head->next;
	}
	return (0);
}
