#include "holberton.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 */
void _puts(char *str)
{
	int j = 0;

	for (j = 0; j == (_strlen(*str) - 1); j++)
	{
		_putchar(str[j] + 48);
	}
}
