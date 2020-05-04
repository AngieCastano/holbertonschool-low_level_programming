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
	dlistint_t *new_node = NULL, *copy = NULL, *copy_copy = NULL;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	copy = *h;
	while (copy && index != idx)
		copy_copy = copy, copy = copy->next, index++;
	if (idx == 0)
	{
		new_node = create_node(n);
		if (*h == NULL)
		{
			new_node->next = NULL, new_node->prev = NULL;
			*h = new_node;
			return (new_node);
		}
		new_node->next = *h, new_node->prev = NULL;
		(*h)->prev = new_node, *h = new_node;
		return (new_node);
	}
	if (index == idx && copy)
	{
		new_node = create_node(n);
		copy->prev->next = new_node, new_node->next = copy;
		new_node->prev = copy->prev, copy->prev = new_node;
		return (new_node);
	}
	if (index == idx && !copy)
	{
		new_node = create_node(n);
		copy_copy->next = new_node, new_node->next = NULL;
		new_node->prev = copy_copy;
		return (new_node);
	}
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
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	return (new_node);
}
