#include "main.h"
#include <stdio.h>

/**
* add - function add two numbers
* @n: the starting value
* Return: void
*/

void print_to_98(int n)
{
if (n >= 98)
{
for (n; n >= 98; n--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}

else
{
for (n; n <= 98; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
}
