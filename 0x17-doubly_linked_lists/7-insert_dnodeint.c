#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head ofthe list
 * @idx: index to insert node
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node = NULL, *copy = NULL;

	if (!h || (!*h && idx != 0))
		return (NULL);
	copy = *h, new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	while (copy && copy->next && index != idx)
		copy = copy->next, index++;
	if (copy != NULL && copy->next == NULL && idx != index)
	{
		index++;
		if (index == idx)
		{
			new_node->prev = copy,	copy->next = new_node;
			return (new_node);
		}
	}
	if (idx == 0)
	{
		if (!*h)
		{
			new_node->next = NULL, new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		new_node->next = *h, new_node->prev = NULL;
		(*h)->prev = new_node, *h = new_node;
		return (new_node);
	}
	if (index == idx)
	{
		copy->prev->next = new_node, new_node->next = copy;
		new_node->prev = copy->prev, copy->prev = new_node;
		return (new_node);
	}
		free(new_node);
		return (NULL);
}
/**
 * create_node - creates a new node
 * @n: data to add
 * Return: new node
 **/
dlistint_t *create_node(int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{

		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
