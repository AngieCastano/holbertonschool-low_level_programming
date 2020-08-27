#include "search_algos.h"
/**
 * print_array - printing the whole array
 * @array: array to print
 * @size: array*s size
 * @end: last part of the original array
 */
void print_array(int *array, size_t size, int *end)
{
	size_t i = 0, j = 0;
	char comma = ',';

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
 * @array: array where to find
 * @size: array's size
 * @value: value to search
 * Return: return the first index where value is located, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m = 0;
	int *end = &*(array + size - 1);

	print_array(&*(array), r - m, end);
	while (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			print_array(&*(array + m + 1), r - m, end);
			l = m + 1;
		}
		else if (array[m] > value)
		{
			print_array(&*(array + l), r - m, end);
			r = m - 1;
		}
		else
		{
			printf("Searching in array: ");
			printf("%li\n", m);
			return (m);
		}
	}
	return (-1);
}
