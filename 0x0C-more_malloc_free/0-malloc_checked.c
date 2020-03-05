#include "holberton.h"
#include <stdlib.h>
/**
 *  malloc_checked - allocates memory using malloc
 * @b: bytes to alloc
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	long int *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
