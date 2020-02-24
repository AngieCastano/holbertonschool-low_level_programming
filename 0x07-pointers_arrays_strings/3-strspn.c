#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to match
 * @accept: string to compare
 * Return: he number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int long_of_s, long_of_c, i, j;
	unsigned int match;

	for (long_of_s = 0; s[long_of_s] != '\0'; long_of_s++)
	{
	}
	for (long_of_c = 0; c[long_of_c] != '\0'; long_of_c++)
	{
	}
	for (i = 0; i < long_of_s && i <= match; i++)
	{
		for (int j = 0; j < long_of_c; j++)
		{
			if (s[i] == accept[j])
			{
				match = match + 1;
				break;
			}
		}
	}
	return (match);
}
