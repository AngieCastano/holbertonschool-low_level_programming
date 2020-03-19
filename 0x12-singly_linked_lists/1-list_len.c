#include "lists.h"

/**
 * print_list -
 * @h: header of the list
 * Return: number of elements of the string
 */
size_t print_list(const list_t *h)
{
	size_t num_of_lists = 0;

	while (h)
	{
		h = h->next, num_of_lists++;
	}
	return (num_of_lists);
}
