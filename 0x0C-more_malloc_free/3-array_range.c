#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: max
 * Return: a pointer to an integer
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *p;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		j++;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
