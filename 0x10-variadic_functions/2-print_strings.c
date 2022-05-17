#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: the separator between strings
 * @n: the number of strings to print
 * @...: the strings to print
 *
 * Description: This function prints strings, separated by separator, followed
 * by a new line. If separator is NULL, it's treated as the empty string. If a
 * string is NULL, print "(nil)" instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int rem = n;
	const char *str = NULL;

	va_start(args, n);
	if (!separator)
		separator = "";
	while (rem--)
	{
		str = va_arg(args, const char *);
		printf("%s", str ? str : "(nil)");
		if (rem)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
