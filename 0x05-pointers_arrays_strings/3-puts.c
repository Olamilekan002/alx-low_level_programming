#include "main.h"
 /**
 * _puts - prints string to stdout
 *
 * @str: the string to be printed to stdout
 */

void _puts(char *str)
{

while(*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}
