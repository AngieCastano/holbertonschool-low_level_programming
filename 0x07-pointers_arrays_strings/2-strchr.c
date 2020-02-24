#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: srting to compare
 * @c: caracter to find
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s = (s + j);
			return (s);
		}
	}
	return ('\0');
}
