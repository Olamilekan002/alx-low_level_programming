#include "main.h"

/**
 * print_last_digit - last digit
 *
 *@n: The int to to find
 * Return: last digit.
 */

int print_last_digit(int n)
{
int last;

last = n % 10;
_putchar(last + '0');
return (n);
}
