#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 * @separator: separator
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int safe;
	va_start(a, n);
	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			safe = va_arg(a, int);
			if (safe)
				printf("%d", safe);
			if (separator)
				printf("%s", separator);
		}
		safe = va_arg(a, int);
		if (safe)
			printf("%d", safe);
		printf("\n");
	}
	va_end(a);
}
