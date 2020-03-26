#include "holberton.h"
/**
 * return_binary - print_binary
 * @n: to  covert to binary
 * Return: char
 */
char *return_binary(unsigned long int n)
{
	char *a;
	int i = 0, base = 2;
	unsigned long int f = n;

	if (f == 0)
	{
		a = "0";
		return (a);
	}
	while (f > 0)
	{
		f /= base;
		++i;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (!a)
	{
		free(a);
		return (NULL);
	}
	i = 0, f = n;
	while (f > 0)
	{
		a[i] = f % base + 48;
		f /= base;
		++i;
	}
	a[i] = '\0';
	return (a);
}
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to evaluate
 * @index: index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *binary;

	binary = return_binary(n);
	if (!binary[index])
		return (-1);
	n = binary[index] - 48;
	return (n);
}
