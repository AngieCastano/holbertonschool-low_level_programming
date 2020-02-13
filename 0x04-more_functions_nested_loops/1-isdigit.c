#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Digit to validate
 *Return: largest number
 */

int _isdigit(int c)
{
	int d;

	if (c >= '0' && c <= '9')
	{
		d = 1;
	}
	else
		d = 0;
	return (d);
}
