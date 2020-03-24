#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 * @head: head of the list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int f = 0;
	listint_t *temp;

	if (*head)
	{
		f = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (f);
	}
	return (0);
}
