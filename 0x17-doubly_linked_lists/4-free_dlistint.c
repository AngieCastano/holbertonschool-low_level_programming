#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list with a simple pointer
 * @head: head of the double linked list
 */
void free_dlistint(dlistint_t *head)
{
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
