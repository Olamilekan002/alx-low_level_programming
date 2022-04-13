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
for (n = n; n >= 98; n--)
{
printf("%d, ", n);
}
}

else
{
for (n = n; n <= 98; n++)
{
printf("%d, ", n);
}
}
}
