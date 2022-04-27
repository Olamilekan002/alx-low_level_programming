#include "main.h"

/**
*_memset - Fills memory with a constant byte
*
*@s: the memory
*@b: constant byte
*@n: number of the byte
*
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
