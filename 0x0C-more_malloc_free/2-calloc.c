#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - genertaes the calloc function
 * @nmemb: how many
 * @size: data type
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0X00;
	return (p);
}
