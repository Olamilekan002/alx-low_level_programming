#include "main.h"

/**
* more_numbers - prints 1 to 14 10 times
*/

void more_numbers(void)
{
int x;
int y;
for (x = 0; x < 11; x++)
{
for (y = 0; y < 15; y++)
{
_putchar(y + '0');
}
_putchar('\n');
}
}
