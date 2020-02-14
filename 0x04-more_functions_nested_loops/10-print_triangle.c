#include "holberton.h"
/**
 * print_triangle - printing a rectangle triangle
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		for (j = 1; j <= (size - i); j++)
		{
			putchar(' ');
		}
		for (j = size; j > (size - i); j--)
		{
			putchar('#');
		}
		putchar('\n');
		i++;
	}
}
