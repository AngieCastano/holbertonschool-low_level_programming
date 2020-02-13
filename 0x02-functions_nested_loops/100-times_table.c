#include "holberton.h"
/**
 * times_table - tells the absolute value of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	int i, j, res = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if ((res / 100) != 0)
				_putchar((res / 100) + '0');
			if ((res / 10) != 0)
				_putchar((res / 10) + '0');
			else
				if (j != 0)
					_putchar(' ');
			_putchar((res % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
int{}

(n/10) hasta que n/10 = 0
	for (i = 0; (n/10))// Necesitamos una funcion que nos divida el numero res hasta que su division sea igual a 0, 
		vamos incrementando una variable para saber cuantas veces cuantos digitos tiene el numero que llegó.
			Una vez tenemos el numero de digitos hacemos una recursion de (res / 1(y aqui el numero de ceros segun el numero de digitos de res ))
			despues toca ir decremetando e; numero de ceros.
