#include "holberton.h"

/**
 *_isupper - says yf a letter is upper or not
 *@c: Character to validate, comes in ascci
 * Return: if upper ot not
 */

int _isupper(int c);
{
	int d = 0;
	if (c >= 'A' && c <= 'Z')
		d = 1;
	else
		d = 0;
	return(d);
}
