#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Digit to validate
 *Return: largest number
 */

int _isdigit(int c)
{
	int d;

	if (c >= '0' && c <= '9')
	{
		d = 1;
	}
	else
		d = 0;
	return (d);
}
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char const *s)
{
	int sign = 1;
	unsigned int num = 0, ifdigit = 1, char1;

	while (*s)
	{
		if (*s != '0' && *s != '1')
			return (0);
		char1 = *s;
		ifdigit = _isdigit(char1);
		if (ifdigit == 0)
			break;
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (num * sign * ifdigit);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary in *char
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int binary = _atoi(b);
	int base = 2, decimal = 0, potencia = 2;

	decimal += (binary % 10);
	binary /= 10;
	while (binary != 0)
	{
		decimal += (binary % 10) * potencia;
		potencia *= base;
		binary /= 10;
	}
	return (decimal);
}
