#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name t o print
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
