#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{

	int j = 0;
	int n = 0;

	for (int i = 0; i <= 9; i++)
	{
		n = (n + 1);
		for (j = n; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if ((i + 48) == (48 + 8) && (j + 48) == (48 + 9))
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
