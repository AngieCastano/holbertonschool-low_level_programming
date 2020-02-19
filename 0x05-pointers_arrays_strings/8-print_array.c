#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;

	for (i = 0; i <= n; i++)
	{
		printf("%d", *(a + i));
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
