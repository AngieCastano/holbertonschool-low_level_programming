#include <stdio.h>

/**
 * main - printf
 *
 * Return: Succes(0) Error(1)
 */
int main(void)
{

	int j = '0';
	int n = '0';

	for (int i = '0'; i <= '9'; i++)
	{
		n = (n + 1);
		for (j = n; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}


	}
	putchar('\n');
	return (0);
}
