#include "holberton.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: array of binarys
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	i--;
	for (; i >= 0; i--)
	{
		decimal += (b[i] - 48) * base;
		base = base << 1;
	}
	return (decimal);
}
