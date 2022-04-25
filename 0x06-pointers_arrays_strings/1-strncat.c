#include "main.h"

/**
*_strcat - concatenate two string
*
*@dest: destination string
*@src: source string
*
*Return: returns the pointer to dest
*/


char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{/* this increase i to len of dest*/
i++;
}
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}

return (dest);
}
