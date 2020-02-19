#include "holberton.h"
/**
 * puts_half - printing the second half of a string
 * @str: string to print its second half
 *
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = (i / 2); j <= i; i++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
