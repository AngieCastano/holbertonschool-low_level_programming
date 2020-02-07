#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar(i / 10 + 48);
		putchar(i % 10 + 48);
		if ((i / 10) == 9 && (i % 10) == 9)
		{
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
