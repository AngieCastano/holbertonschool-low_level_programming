#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_list;
	listint_t *temp = *head;

	new_end_list = malloc(sizeof(listint_t));
	if (!new_end_list)
		return (NULL);
	new_end_list->n = n;
	new_end_list->next = NULL;
	if (!*head)
	{
		*head = new_end_list;
	}
	else
	{
		while (temp && temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_end_list;
	}
	return (*new);
}
