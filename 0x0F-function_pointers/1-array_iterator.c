#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - element of an array.
 * @array: array
 * @size: size of the aray
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || !size)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
