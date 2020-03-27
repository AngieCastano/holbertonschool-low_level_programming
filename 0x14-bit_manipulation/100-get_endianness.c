#include "holberton.h"

/**
 * get_endianness -checks the endianness.
 * Return: 1 if Little endian, 0 if Big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
