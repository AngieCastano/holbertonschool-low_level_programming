#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j, pendiente_neg = 0, pendiente_pos = 0;

	for (i = 0; i < size * size; i + (size + 1))
		pendiente_neg += a[i];
	for (j = 0; j < size * size; j + (size -1))
		pendiente_pos += a[j];
	print_number(pendiente_neg);
	print_number(pendiente_pos);
}
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
