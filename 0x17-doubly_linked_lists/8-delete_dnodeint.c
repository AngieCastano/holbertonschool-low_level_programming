#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index
 * @head : head of the list
 * @index: index to delee
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int index_inside = 0;
	dlistint_t *copy = NULL;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free((*head)->prev);
		return (1);
	}
	copy = *head;
	while (copy && index != index_inside && copy->next)
	{
		index_inside++;
		copy = copy->next;
	}
	if (index == index_inside)
	{
		copy->next->prev = copy->prev;
		copy->prev->next = copy->next;
		free(copy);
		return (1);
	}
	return (-1);
}
