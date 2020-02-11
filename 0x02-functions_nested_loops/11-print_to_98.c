#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - printingnatural numbers
 * @n: integer number
 * Return: 0n succes 1
 * On error
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		if (n < 98)
			n++;
	}
	printf("%d\n", n);
}
