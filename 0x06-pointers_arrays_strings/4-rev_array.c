#include "holberton.h"
/**
 * reverse_array - reversing the content of an array of integers
 * @a: array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < (n - 1); i++)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1] = c;
		n--;
	}
}
