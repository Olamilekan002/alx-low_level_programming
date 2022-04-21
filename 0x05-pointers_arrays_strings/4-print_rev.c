#include "main.h"

/**
* print_rev - reverses string and to stdout.
*
* @s: the string to be printed to stdout
*/

void print_rev(char *s)
{
int len;

len = _strlen(s); /* a funtion that was once written */

while (len >= 0)
{
_putchar(*(s + len));
len--;
}

_putchar('\n');
}
