#include "holberton.h"
/**
 * print_alphabet - writes the alphabet in lower case
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	for (i = 97; i <= 122; i++)
		_putchar(i);
}
