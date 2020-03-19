#include "lists.h"

/**
 * list_len - Returns number of elements of the string
 * @h: header of the list
 * Return: number of elements of the string
 */
size_t list_len(const list_t *h)
{
	size_t num_of_lists = 0;

	while (h)
	{
		h = h->next, num_of_lists++;
	}
	return (num_of_lists);
}
