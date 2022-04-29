#include "main.h"

/**
* _puts_recursion - gets the length of a prefix substring
* @s: input string to search for substring
* Return: length of prefix substring
*/

void _puts_recursion(char *s)
{
if (s == '\0')
{
return ('\n');
}
_putchar(s);

_puts_recursion(s + 1);
}
