#include "search_algos.h"
/**
 * print_array - print every integer from the given array
 * @array: array to print
 * @size: array's size
 * @end: end of the original array
 */
void print_array(int *array, size_t size, int *end)
{
	size_t i = 0, j = 0;
	char comma = ',';

	if (!array || size <= 0)
		return;
	if (&*(array + i) <= end)
	{
		printf("Searching in array: ");
		printf("%i", array[i]);
		j++;
	}
	for (i = 1; i < size; i++)
	{
		comma = ',';
		if (&*(array + i) <= end)
		{
			printf("%c %i", comma, array[i]);
			j++;
		}
	}
	if (j > 0)
		printf("\n");
}
/**
 * binary_search - binary search algorithm
 * @array: array to traverse
 * @size: size of the array to traverse
 * @value: value to search
 * Return: index of value or -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;
	int *end = &*(array + size - 1);

	if (!array)
		return (-1);

	left  = 0;
	right = size - 1;
	print_array(array, size, end);
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
		{
			print_array(&array[middle + 1], (right - middle), end);
			left = middle + 1;
		}
		else
		{
			print_array(&array[left], (right - middle) - 1, end);
			right = middle - 1;
		}
	}
	return (-1);
}
