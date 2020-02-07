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

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{

			putchar(i);
			putchar(j);

			if (i == (48 + 8) && j == (48 + 9))
			{
			}
			else
			{
				putchar(44);
				putchar(32);
			}



		}
	}
	putchar(10);
	return (0);
}
