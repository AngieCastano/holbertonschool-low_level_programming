#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *copy_head, *puntero_head;

	puntero_head = *head;
	*head = NULL;
	if (head)
	{
		while (puntero_head)
		{
			copy_head = puntero_head->next;
			free(puntero_head);
			puntero_head = copy_head;
		}
	}
}
