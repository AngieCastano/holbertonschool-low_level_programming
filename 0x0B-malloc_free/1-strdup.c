#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - generates a string
 * @str: string to recive
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
	}
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	free(copy);
	return (copy);
}
