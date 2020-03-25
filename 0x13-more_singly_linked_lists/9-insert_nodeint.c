#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head
 * @idx: index
 * @n: value to insert
 * Return:  the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (*head && (*head)->next && i < idx - 1)
	{
		*head = (*head)->next;
		i++;
	}
	new->next = (*head)->next;
	(*head)->next = new;
	return ((*head)->next);
}
