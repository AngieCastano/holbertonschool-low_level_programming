#include "holberton.h"
/**
 * _strncpy - copies strings
 * @dest: destination
 * @src: source
 * @n: until when
 * Return: the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, long_of_src;

	for (long_of_src = 0; src[long_of_src] != '\0'; long_of_src++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (n >= long_of_src)
		dest[long_of_src] = '\0';
	return (dest);
}
