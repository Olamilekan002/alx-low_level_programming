#include "main.h"

/**
*_memcpy - Fills memory with a constant byte
*
*@dest: the destination memory
*@src: source memry
*@n: number of the byte
*Return: points to a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
