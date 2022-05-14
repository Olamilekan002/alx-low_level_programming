#include "function_pointers.h"

/**
 * print_name - print a name using the callback
 * @name: the name to print
 * @f: the function to call to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
