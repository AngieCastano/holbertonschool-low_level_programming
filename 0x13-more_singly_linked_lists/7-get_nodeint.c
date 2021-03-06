#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head
 * @index: index
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	while (head && head->next && i < index - 1)
	{
		head = head->next;
		i++;
	}
	return (head->next);
}
