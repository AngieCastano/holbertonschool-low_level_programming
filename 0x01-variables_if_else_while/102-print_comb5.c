#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{

			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(32);
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if((i / 10 + 48) != 9 && (i % 10 + 48) != 8 && (j / 10 + 48) != 9 && (j % 10 + 48) != 9)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
			}
		}
	}
	putchar(10);
	return (0);
}
