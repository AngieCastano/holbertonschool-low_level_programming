#include "lists.h"

/**
 * print_list - prints number of lists
 * @h: header of the list
 * Return: number of elements of the string
 */
size_t print_list(const list_t *h)
{
	size_t num_of_lists = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next, num_of_lists++;
	}
	return (num_of_lists);
}
