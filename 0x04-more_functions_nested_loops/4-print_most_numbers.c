#include "holberton.h"

/**
 * print_most_numbers - print0 to 9 less 2 and 4
 *
 *
 */

void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9' ; i++)
		if (i == '2' || i == '4')
		{
		}
		else
			_putchar(i);
	_putchar('\n');
}
