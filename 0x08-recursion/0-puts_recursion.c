#include "holberton.h"
/**
 * _puts_recursion - printing a string followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
