#include <stdio.h>
#include <stdlib.h>
/**
 * main - gives the min qntity of coins to make change
 * @argc: qntity of arguments
 * @argv: vector of arguments
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	int a = 0, qnty = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	a = atoi(argv[1]);
	if (a / 25 >= 1 && a > 0)
	{
		qnty += a / 25, a -= (a / 25) * 25;
	}
	if (a / 10 >= 1 && a > 0)
	{
		qnty += a / 10;
		a -= (a / 10) * 10;
	}
	if (a / 5 >= 1 && a > 0)
	{
		qnty += a / 5;
		a -= (a / 5) * 5;
	}
	if (a / 2 >= 1 && a > 0)
	{
		qnty += a / 2;
		a -= (a / 2) * 2;

	}
	if (a / 1 >= 1 && a > 0)
	{
		qnty += a / 1;
		a -= (a / 1) * 1;
	}
		printf("%d\n", qnty);
	return (0);
}
