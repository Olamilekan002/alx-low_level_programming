#include "main.h"

/**
* print_line - prints  straight line
* @n: lenght of line
*/

void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
else
{
_putchar('\n');
}
}
