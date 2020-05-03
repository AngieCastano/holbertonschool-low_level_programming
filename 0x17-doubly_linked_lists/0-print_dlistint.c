#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
