#include "holberton.h"
#include <stdlib.h>
/**
 * create_array -  creates an initializes with specific values
 * @size: size of array
 * @c: char of initialization
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		str[i] = c;
	if (size == 0)
		return (NULL);
	return (str);

}
