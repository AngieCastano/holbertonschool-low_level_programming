#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a new node
 * @head: the head of the linked list
 * @str: the new string
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr = strdup(str);
	unsigned int i = 0;
	list_t *new = malloc(sizeof(list_t)), *last = NULL;

	if (!new)
		return (NULL);


	while (*str)
	{
		i++, str++;
	}
	new->str = ptr;
	new->len = i;
	new->next = NULL;

	last = *head;
	if (!last)
		*head = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
