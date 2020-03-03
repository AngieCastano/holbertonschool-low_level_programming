#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: a concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	s = malloc((i + j + 1) * sizeof(char));
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = s2[j];
	return (s);
}
