#include "holberton.h"
/**
 * print_line - printing straight line
 * @n: how many times will be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
