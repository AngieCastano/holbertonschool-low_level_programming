#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	int i, j, big, small, n = 1024, h = 1, potencia = 1;

	if (n < 0)
	{
		putchar('-');
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
		putchar(small + 48);
	}
}
