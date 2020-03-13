#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @separator: separator
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *b;

	va_start(a, n);
	for (i = 0; i < n - 1; i++)
	{
		b = va_arg(a, char *);
		if (b)
			printf("%s", b);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(a, char *));
	va_end(a);
}
