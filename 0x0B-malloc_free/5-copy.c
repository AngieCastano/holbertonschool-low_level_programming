#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - oncatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: the conctenated string
 */
char *argstostr(int ac, char **av)
{
	int i, f = 0, k;
	char *s;

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			f++;
		}
		f++;
	}
	s= malloc(sizeof(char) * f);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			s[f] = av[i][k];
			f++;
		}
                s[f++] = '\n';
	}
	s[f++] = '\0';
	return (s);
}
