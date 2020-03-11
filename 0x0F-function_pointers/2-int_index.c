#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: array to see
 * @size: size
 * @cmp: function
 * Return: index where cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, i;

	if (size <= 0)
		return (-1);
	if (!size || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index != 0)
			return (i);
	}
	return (-1);
}
