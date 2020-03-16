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

	va_start(a, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
