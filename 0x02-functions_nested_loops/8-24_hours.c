#include "main.h"

/**
* jack_bauer - prints time
*
* Return : no return
*/

void jack_bauer(void)
{
int i, j, k, l;

for ( i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(k + '0');
_putchar(l + '0');
}
}
}
}

}
