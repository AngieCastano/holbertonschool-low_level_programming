#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	int i, j, big, small, h = 1, potencia = 1;

	if (n == 0)
	{
		_putchar(48);
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	for (i = 0; h != 0; i++)
	{
		h = n / potencia;
		potencia = potencia * 10;
	}
	potencia = potencia / 100;
	for (j = (i - 1); j != 0; j--)
	{
		big = n / potencia;
		small = big % 10;
		potencia = potencia / 10;
		_putchar(small + 48);
	}
}
