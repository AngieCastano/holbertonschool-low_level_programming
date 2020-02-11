#include "holberton.h"
/**
 * print_to_98 - printingnatural numbers
 * @n: integer number
 * Return: 0n succes 1
 * On error
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
				_putchar((i  / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
}
