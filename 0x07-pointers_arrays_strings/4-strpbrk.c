#include "holberton.h"
/**
 * _strpbrk - cuts the strin=g from the 1 found chatacter
 * @s: string to compare
 * @accept: string from compare
 * Return: a pointer whar found the character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, long_of_s, long_of_accept, j;

	for (long_of_s = 0; s[long_of_s] != '\0'; long_of_s++)
	{
	}
	for (long_of_accept = 0; accept[long_of_accept] != '\0'; long_of_accept++)
	{
	}
	for (i = 0; i < long_of_s; i++)
	{
		for (j = 0; j < long_of_accept; j++)
		{
			if (s[i] == accept[j])
			{
				s = (s + i);
				return (s);
			}
		}
	}
	return ('\0');
}
