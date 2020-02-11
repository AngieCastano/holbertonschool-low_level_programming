#include "holberton.h"
/**
 * print_last_digit - tells if a character i lower or not
 * @n: Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
