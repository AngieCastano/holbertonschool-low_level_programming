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
	int n = 5;
	char *s;
	s = malloc(n * sizeof(char));
	printf("%ld ar \n", sizeof(malloc(n * sizeof(char))));
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			f++;
			printf("%c\n",av[i][k]);
		}
		f++;
	}
	++f;
	printf("%d f \n", f);
	s = malloc(n * sizeof(char));
	printf("%ld s \n", sizeof(s));
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
