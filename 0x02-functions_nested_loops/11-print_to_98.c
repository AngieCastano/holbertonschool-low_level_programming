#include "holberton.h"
/**
 * print_to_98 - printingnatural numbers
 * @n: integer number
 * Return: 0n succes 1
 * On error
 */
void print_to_98(int n)
{
	int i, x;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				x = i * -1;
				_putchar('-');
				if (i < -9)
					_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((i / 10) != 0)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
				_putchar((i / 100) + '0');
			_putchar((i / 10) % 10 + '0');
			_putchar((i % 10) + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
