#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - print_char
 * @a: to print
 */
void print_char (va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
 * print_int - print_int
 * @a: to print
 */
void print_int (va_list a)
{
	printf("%i", va_arg(a, int));
}
/**
 * print_float - print_float
 * @a: to print
 */
void print_float (va_list a)
{
	printf("%f", va_arg(a, double));
}
/**
 * print_string - print_string
 * @a: to print
 */
void print_string(va_list a)
{
	char *s = va_arg(a, char *);
	if (s)
		printf("%s", s);
	else
		printf("(nil)");
}

/**
x * print_all - prints char
 * @format: tipe of format to print
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	fmt_type match[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (match[j].c)
		{
			if (format[i] ==  match[j].c)
			{
				match[j].f(args);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
	i++;
	}
	printf("\n");
	va_end(args);
}
