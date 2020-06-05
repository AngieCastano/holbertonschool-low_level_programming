#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table that prinets in a sorted list
 * @size: array size
 * Return: the table created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	if (size == 0)
		return (NULL);
	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	sht->size = size;
	sht->array = calloc(size, sizeof(shash_node_t *));
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}
/**
 * shash_table_set - sets a sorted hash table item
 * @sht: sorted hash table
 * @key: key to add to the sorted hash table item
 * @value: value to add to the sorted hash table item
 * Return:  1 if it succeeded, 0 otherwise
  */
int shash_table_set(shash_table_t *sht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *copy;

	if (!value)
		return (0);
	if (sht && key && *key != '\0')
	{
		index = key_index((unsigned char *)key, sht->size);
		copy = sht->array[index];
		if (sht_update_key(copy, key, value) == 1)
			return (1);
		new = add_nodesht(&sht->array[index], value, key);
		if (new)
		{
			add_node_sl_print(&sht->shead, &sht->stail, new);
			return (1);
		}
	}
	return (0);
}
/**
 * sht_update_key - looks if a key already exists
 * @head: list head t traverse
 * @compare: string to compare
 * @value: value of the key
 * Return: 1 if it already exists, 0 if it doesn't
 */
int sht_update_key(shash_node_t *head, const char *compare, const char *value)
{
	while (head)
	{
		if (strcmp(compare, head->key) == 0)
		{
			free(head->value);
			head->value = strdup((char *) value);
			return (1);
		}
		head = head->next;
	}
	return (0);
}
/**
 * add_nodesht - adds a new node at the beginning of a list
 * @head: head of the list
 * @v: value to add
 * @k: key ti asign
 * Return: the address of the new element, or NULL if it failed
 */
shash_node_t *add_nodesht(shash_node_t **head, const char *v, const char *k)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(k);
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
 * add_node_sl_print - adds node to the sorted list to print
 * @h:  head of the sorted list to print
 * @tail: tail of the sorted ht list
 * @n: new node to add
 */
void add_node_sl_print(shash_node_t **h, shash_node_t **tail, shash_node_t *n)
{
	shash_node_t *copy = *h;
	int counter = 0;


	if (!*h)
	{
		n->sprev = NULL, *h = n, *tail = n;
		(*tail)->snext = NULL;
		return;
	}
	if (!copy->snext)
	{
		if (copy->key[0] < n->key[0])
		{
			n->sprev = copy, copy->snext = n;
			n->snext = NULL, *tail = n;
		}
		else if (copy->key[0] > n->key[0])
		{
			n->snext = copy, n->sprev = NULL;
			copy->sprev = n, copy->snext = NULL, *h = n;
		}
		return;
	}
	while (copy->key[0] < n->key[0] && copy->snext)
		copy = copy->snext, counter++;
	if (copy->key[0] > n->key[0])
	{
		n->sprev = copy->sprev, n->snext = copy;
		if (copy->sprev)
			copy->sprev->snext = n;
		copy->sprev = n;
		if (counter == 0)
			*h = n;
		return;
	}
	n->sprev = copy, n->snext = NULL;
	copy->snext = n, *tail = n;
	if (counter == 0)
		*h = n;
}
/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht:  hash table to look into
 * @key: key you are looking for
 * Return: value associated with the key, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *copy;

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
/**
 * shash_table_print - function that prints a hash table.
 * @ht:  hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *c;
	char *comma = "";

	if (!ht)
		return;
	printf("{");
	c = ht->shead;
	while (c)
	{
		printf("%s'%s': '%s'", comma, c->key, c->value);
		comma = ", ";
		c = c->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints sorted hash table in reverse
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *c;
	char *comma = "";

	if (!ht)
		return;
	printf("{");
	c = ht->stail;
	while (c)
	{
		printf("%s'%s': '%s'", comma, c->key, c->value);
		comma = ", ";
		c = c->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			free_list_sh(&ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}

/**
 * free_list_sh -function that frees a list_t list.
 * @head: head of the list
 */
void free_list_sh(shash_node_t **head)
{
	shash_node_t *next_head;

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
