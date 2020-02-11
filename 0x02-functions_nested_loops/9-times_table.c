#include "holberton.h"
/**
 * times_table - tells the absolute value of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j, res = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if ((res / 10) != 0)
				_putchar((res / 10) + '0');
			else
				if (j != 0)
					_putchar(' ');
			_putchar((res % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
