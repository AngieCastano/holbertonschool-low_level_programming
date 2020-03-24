#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	free(head);
	if (temp)
	{
		temp = temp->next;
		free_listint(temp);
	}
	else
		free(head);
}
