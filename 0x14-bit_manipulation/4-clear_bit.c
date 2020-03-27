#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: numbre to see
 * @index: index;
 * Return: 1 if succes, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = 1;

	if (index >= (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	new = new << index;
	new = ~new;
	*n = new & *n;
	return (1);
}
