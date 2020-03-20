#include "lists.h"
#include <stdlib.h>
/**
 * free_list -function that frees a list_t list.
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *copy_head;

	while (head)
	{
		copy_head = head->next;
		free(head->str);
		free(head);
		head = copy_head;
	}
}
