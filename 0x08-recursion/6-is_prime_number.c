#include "holberton.h"
/**
 * is_prime_number - prionts if print number or not
 * @n: number to verify
 * Return: 1 if yes, 0 if not
 */
int is_prime_number(int n)
{
	int x;

	if (n > 1)
	{
		x = 2;
		x = otra(x, n);
		return (x);
	}
	else
		return (0);
	return (x);
}

/**
 * otra - searches for prime numbers
 * @x: dfgdg
 * @n: ergregr
 * Return: dfgtrh
 */
int otra(int x, int n)
{
	if (x == (n - 1))
		return (1);
	if (n % x == 0)
		return (0);
	x = otra(x + 1, n);
	return (x);
}
