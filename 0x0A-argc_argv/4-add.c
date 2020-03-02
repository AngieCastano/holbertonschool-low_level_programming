#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - looks if a string is numeric or not
 * @c: string to see
 * Return: 1 if numeric, 0 if not
 */
int _isdigit(char *c)
{
	int d = 1;
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			d *= 1;
		}
		else
			d *= 0;
	}
	return (d);
}
/**
 * main - multiplies 2 numbers
 * @argc: qntity of arguments
 * @argv: vector of arguments
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isdigit(argv[i]) != 1)
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
