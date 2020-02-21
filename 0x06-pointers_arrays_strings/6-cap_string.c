#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to march
 * Return: pointer char
 */
char *cap_string(char *s)
{
	int i, x;
	char list[] = {' ', '\t', '\n', ',', ';', '.', '!',
		       '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			s[0] -= 32;
		for (x = 0; x < 13; x++)
		{
			if (s[i] == list[x] && s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
