#include "holberton.h"
/**
 * print_square - printing a square with x size
 * @size: size
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++ )
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}
