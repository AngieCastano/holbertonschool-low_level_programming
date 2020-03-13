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
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(a, int));
	va_end(a);
}
