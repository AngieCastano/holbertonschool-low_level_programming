#include "lists.h"

/**
 * sum_dlistint - returns the sum of all n of a dlistint_t linked list.
 * @head: head of the double linked list
 * Return: returns the sum of all the data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
