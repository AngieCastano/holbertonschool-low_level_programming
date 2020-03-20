#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: head of the string
 * @str: string to concatenate
 * Return: the address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_list;
	int i;
	list_t *temp = *head;

	new_end_list = malloc(sizeof(list_t));
	if (!new_end_list)
		return (NULL);
	new_end_list->str = strdup(str);
	for (i = 0; str[i]; i++)
	{
	}
	new_end_list->len = i;
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
	return (*head);
}
