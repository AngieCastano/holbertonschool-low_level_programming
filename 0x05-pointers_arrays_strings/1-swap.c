#include "holberton.h"
/**
 * swap_int - interchanging values
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;

}
