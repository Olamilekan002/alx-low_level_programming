#include "main.h"

/**
* print_rev - reverses string and to stdout.
*
* @s: the string to be printed to stdout
*/

void print_rev(char *s)
{
int len;
int i;

len = 0;
while (*s != '\0')
{
len++;
s++;
}

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
