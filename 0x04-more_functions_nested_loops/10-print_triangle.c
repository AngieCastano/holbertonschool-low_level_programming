#include "holberton.h"
/**
 * print_triangle - printing a rectangle triangle
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');
			}
			for (j = size; j > (size - i); j--)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
