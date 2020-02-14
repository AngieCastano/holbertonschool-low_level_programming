#include <stdio.h>

int main()
{
	int i, n, a, b, d;
	d = 1;
	n = 612852475143;

	for (i = n; i >= 1; i--)
	{
		a = 6   * i + 1;
		b = 6 * i - 1;

		if ((a % 5) == 0)
		{

		}
		else if ((n % a) == 0 && n != a)
		{
			while(d == 1)
			{
				printf("%i", a);
				d = 2;
			}
		}

		if ((b % 5) == 0)
		{

		}
		else if ((n % b) == 0 && n != b)
		{
			while(d == 1)
			{
				printf("%i", b);
				d = 2;
			}

		}
	}
	if ((n % 5) == 0)
	{
		while(d == 1)
		{
			printf("5");
			d = 2;
		}
	}

	if ((n % 3) == 0)
	{
		while(d == 1)
		{
			printf("3");
			d = 2;
		}
	}
	if ((n % 2) == 0)
	{
		while(d == 1)
		{
			printf("2");
			d = 2;
		}
	}

	return 0;
}
