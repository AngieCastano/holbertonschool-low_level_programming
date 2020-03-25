#include "lists.h"

/**
 * sum_listint - suma los n
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		if (head->n)
			n += head->n;
		head = head->next;
	}
	return (n);
}
