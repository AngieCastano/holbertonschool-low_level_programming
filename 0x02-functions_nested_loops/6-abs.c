#include "holberton.h"
/**
 * _abs - tells the absolute value of a number
 * @n: Integer as a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return(n);
	}
}
