#include "holberton.h"
/**
 * _strncat - concayenating 2 strings
 * @dest: where both string become 1
 * @src: string to add to de dest
 * @n: until when
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
		dest[i + j] = src[j];
	return (dest);
}
