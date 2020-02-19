#include "holberton.h"
/**
 * rev_string - reversing a string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int final, inicio;
	char c;

	for (final = 0; s[final] != '\0'; final++)
	{
	}
	final = final - 1;
	for(inicio = 0; inicio <= final; inicio++)
	{
		c = s[inicio];
		s[inicio] = s[final];
		s[final] = c;
		final--;
	}
}
