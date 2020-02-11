#include "holberton.h"
/**
 * print_alphabet - writes the alphabet in lower case
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
