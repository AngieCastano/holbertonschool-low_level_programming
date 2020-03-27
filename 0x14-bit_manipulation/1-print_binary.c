#include "holberton.h"
/**
 * print_binaryrecursively - print_binaryrecursively
 * @n: decimal to convert
 */
void print_binaryrecursively(unsigned long int n)
{
	if (n > 1)
	{
		print_binaryrecursively(n >> 1);
	}
	_putchar((n & 1) + 48);
}
/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal to convert to binary
 */
void print_binary(unsigned long int n)
{
		print_binaryrecursively(n);
}
