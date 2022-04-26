#include "main.h"

/**
*_strncat - concatenate two string
*
*@dest: destination string
*@src: source string
*@n: limit from src
*
*Return: returns the pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}

while (src[k] != '\0' && n > k)
{
dest[i] = src[k];
k++;
i++;
}

if (n > 0)
{
dest[i] = '\0';
}

return (dest);
}
