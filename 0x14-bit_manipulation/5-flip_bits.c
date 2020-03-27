#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * @n: first number
 * @m: second number
 * Return: returns the number of bits you would need to flip to get from one
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, i, j = 0;

	flip = n ^ m;
	for (i = 0; i < 9999; i++)
	{
		if ((flip & 1) == 1)
			j++;
		flip = flip >> 1;
	}
	return (j);
}
