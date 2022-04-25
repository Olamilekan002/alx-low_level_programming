#include "main.h"

/**
*_strcat - concatenate two string
*
*@dest: destination string
*@src: source string
*
*Return: returns the pointer to dest
*/


char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{/* this increase i to len of dest*/
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;

dest[i] = '\0';

return (dest)
}
