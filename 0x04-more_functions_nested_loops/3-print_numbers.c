#include "holberton.h"

/**
 * print_numbers - prints naumbers from 0 to 9
 *
 *
 */

void print_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
