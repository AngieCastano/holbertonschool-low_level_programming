#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: normal string
 * @s2: string to split
 * @n: bytes to show
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *concatenated;

	for (i = 0; s1[i]; i++)
	{
	}
	j = i + n + 1;
	concatenated = malloc(sizeof(char) * j);
	if (concatenated == NULL)
		return (NULL);
	i = 0;
	for (i = 0; s1[i]; i++)
	{
		concatenated[i] = s1[i];
	}
	k = 0;
	while (i < j)
	{
		concatenated[i] = s2[k];
		k++;
		i++;
	}
	concatenated[i - 1] = '\0';
	return (concatenated);
}
