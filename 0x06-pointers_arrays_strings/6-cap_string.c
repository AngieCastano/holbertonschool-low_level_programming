#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to march
 * Return: pointer char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 122 || s[i] == 59)
		{
			if (s[i + 1] > 96 && s[i + 1] < 123 && s[i + 1])
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
