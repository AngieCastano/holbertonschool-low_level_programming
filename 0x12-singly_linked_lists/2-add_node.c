#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginnig
 * @head: la struct a la cual hay que apuntar
 * @str: string to put in the new object
 * Return: the address of the new header
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_address;

	new_address = malloc(sizeof(list_t));
	if (!new_address)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
	}
	new_address->len = i;
	new_address->str = strdup(str);
	new_address->next = *head;
	*head = new_address;
	return (new_address);
}
