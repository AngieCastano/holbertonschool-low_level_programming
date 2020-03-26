#include "holberton.h"
/**
 * print_binaryrecursively - print_binaryrecursively
 * @n: decimal to convert
 */
void print_binaryrecursively(unsigned long int n)
{
	if (n > 1)
	{
		print_binaryrecursively(n /= 2);
		printf("%li", n % 2);
	}
}
/**
 * print_binary -  prints the binary representation of a number.
 * @n: decimal to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n <= 0)
		printf("%i", 0);
	n *= 2;
	if (n > 0)
	{
		print_binaryrecursively(n);
	}
}
