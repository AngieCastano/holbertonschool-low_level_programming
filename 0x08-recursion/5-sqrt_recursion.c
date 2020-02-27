#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find its root
 * Return: root
 */
int _sqrt_recursion(int n)
{
	int x = n;

	x = _root(x, n);
	return (x);
}
/**
 * _root - decremets a number
 * @x: number to decrement
 * @n: ene
 * Return: the laste decrement
 */
int _root(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x <= 0)
		return (-1);
	else if (x > 0)
		return (_root(--x, n));
	return (-1);
}
