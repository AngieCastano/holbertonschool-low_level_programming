#include "holberton.h"
/**
 * _strstr - Write a function that locates a substring
 * @haystack: string to compare
 * @needle: string to find
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, long_of_hay, long_of_need;
	int h = 0;

	for (long_of_hay = 0; haystack[long_of_hay] != '\0'; long_of_hay++)
		;
	for (long_of_need = 0; needle[long_of_need] != '\0'; long_of_need++)
		;
	for (i = 0; i < long_of_hay; i++)
	{
		h = 0;
		for (j = 0; j < long_of_need; j++)
		{
			while (haystack[i + h] == needle[j])
				h = h + 1;
			if (h == long_of_need)
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return ('\0');
}
