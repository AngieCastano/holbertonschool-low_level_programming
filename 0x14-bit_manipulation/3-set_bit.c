#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: n to change
 * @index: index
 * Return: number changed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = 1;

	if (index >= (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	new = new << index;
	*n = *n | new;
	return (*n);
}
