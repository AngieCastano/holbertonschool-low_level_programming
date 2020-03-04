#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: many words
 */
char **strtow(char *str)
{
	char **nstring;
	int i, j, k, c, numofstring;
	int numarray = 0;

	for (i = 0; str[i]; i++)
	{
		c = 0;
		if (c < 1)
		{
			for (j = 0; str[j] != ' '; j++)
			{
				numarray++;
				c++;
			}
		}
	}
	nstring = malloc(sizeof(char*) * numarray);
	numarray = 0;
	for (i = 0; str[i]; i++)
	{
		for (k = 0; k < numarray; k++)
		{
			numofstring = 0;
			for (j = 0; str[j] != ' '; j++)
			{
				numofstring++;
			}
			numofstring++;
			nstring[k] = malloc (sizeof(char) * numofstring);
			for (j = 0; str[j] != ' '; j++)
                        {
                                nstring[k][j] = str[j];
			}
			nstring[k][j] = '\n';
		}
		nstring[k][j] = '\0';
	}
	return (nstring);
}
