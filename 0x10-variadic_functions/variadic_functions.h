#ifndef _HEADER_FILE_
#define _HEADER_FILE_
#include <stdarg.h>
#include <stdio.h>
typedef struct ch_fmt
{
	char c;
	void (*f)(va_list);
}fmt_type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
