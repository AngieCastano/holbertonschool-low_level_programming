#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next_head;

	if (!head)
		return;
	while ((head || (*head)) && (*head)->next)
	{
		next_head = (*head)->next;
		free(*head);
		*head = next_head;
	}
//	free(**head);
	free(*head);
	*head = NULL;
}
