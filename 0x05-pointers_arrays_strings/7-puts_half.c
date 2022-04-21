#include "main.h"

/**
 * puts_half - prints half of a string
 *
 *@str: the string to be halfed.
 */

void puts_half(char *str)
{
int length, n, i;

for (length = 0; str[length] != '\0'; length++)
{
}
n = (length - 1) / 2;

i = n + 1;
for (i; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
