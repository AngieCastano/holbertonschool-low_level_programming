#include "holberton.h"

/**
 * more_numbers - print 10 times 1-14
 *
 *
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

	for (i = 1 ; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) == 0)
			{
			}
			else
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	       _putchar('\n');
	}
}
