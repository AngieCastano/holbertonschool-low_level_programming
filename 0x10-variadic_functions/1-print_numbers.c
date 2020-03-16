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
		for (i = 0; i < n - 1 && separator != NULL; i++)
		{
			printf("%d", va_arg(a, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(a, int));
		printf("\n");
	va_end(a);
}
