#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
