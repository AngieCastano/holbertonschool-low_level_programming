#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: diagonal length
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		_putchar('\n');
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
	}
}
