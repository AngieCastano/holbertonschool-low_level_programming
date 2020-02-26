#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to see
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x = _strlen_recursion(s + 1);
		return (x + 1);
	}
	else
		return (0);
}
