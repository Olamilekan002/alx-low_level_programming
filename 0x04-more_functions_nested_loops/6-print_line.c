#include "main.h"

/**
* print_line - prints  straight line
* @n: lenght of line
*/

void print_line(int n)
{
if (n > 0)
{
for (n; n >= 0; n--)
{
_putchar('_');
}
}
else
{
_putchar('\n')
}
}
