#include "holberton.h"
/**
 * print_rev - printing a string in reverse
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
