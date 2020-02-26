#include "holberton.h"
/**
 * _pow_recursion - power x^y
 * @x: value to multiply
 * @y: how many times
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		y--;
		x *= _pow_recursion(x, y);
		return (x);
	}
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (0);
}
