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
	if (i % 2 == 0)
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	else
	{
		for (j = (i / 2 + 1); j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
