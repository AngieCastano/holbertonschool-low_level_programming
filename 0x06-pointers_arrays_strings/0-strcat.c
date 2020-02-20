#include "holberton.h"
/**
 * _strcat - concayenating 2 strings
 * @dest: where both string become 1
 * @src: string to add to de dest
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	return (dest);
}
