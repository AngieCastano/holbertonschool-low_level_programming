#include "lists.h"

/**
 * get_dnodeint_at_index -eturns the nth node of a dlistint_t linked list.
 * @head: head of the double linked list
 * @index: index toc heck
 * Return:  the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int number_of_index = 0;

	while (number_of_index != index && head->next)
	{
		head = head->next;
		number_of_index++;
	}
	if (number_of_index == index)
		return (head);
	else
		return (NULL);
}
