#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);
	return (0);
}
