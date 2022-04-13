#include "main.h"

/**
* times_table - prints time table of 9
*
* Return : no return
*/

void times_table(void)
{
int i, j, mul;

for (i = 0; i <= 9; i++)
{

for (j = 0; j <= 9; j++)
{
mul = i * j;

if (mul / 10 != 0)
{
putchar (mul / 10 + '0');
}
_putchar (mul % 10 + '0');
if (j != 9)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');

}

}
