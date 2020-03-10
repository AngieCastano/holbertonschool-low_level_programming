#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *cp1;
	char *cp2;

	cp1 = _strdup(name);
	if (!cp1)
		return (NULL);
	cp2 = _strdup(owner);
	if (!cp2)
	{
		free(cp1);
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (!new)
	{
		free(cp1);
		free(cp2);
		return (NULL);
	}
	new->name = cp1;
	new->age = age;
	new->owner = cp2;
	return (new);
}
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
	copy = malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
