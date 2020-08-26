#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array where to find
 * @size: array's size
 * @value: value to search
 * Return: return the first index where value is located, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || !size || !*array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
