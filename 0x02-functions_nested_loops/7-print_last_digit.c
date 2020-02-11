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
	int x = 0;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
