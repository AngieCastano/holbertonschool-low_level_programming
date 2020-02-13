#include "holberton.h"
/**
 * times_table - tells the absolute value of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int i, j, res = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if ((res / 10) != 0)
				_putchar((res / 10) + '0');
			else
				if (j != 0)
					_putchar(' ');
			_putchar((res % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
