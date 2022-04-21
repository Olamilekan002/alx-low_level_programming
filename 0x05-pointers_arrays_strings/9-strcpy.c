#include "main.h"

/**
* _strcpy - prints a number given of elements
*
*@dest: destination array
*@src: source array
*Return: Return dest
*/

char *_strcpy(char *dest, char *src)
{
int length, i;

for (length = 0; src[length] != '\0'; length++)
{
}

for (i = 0; i <= length; i++)
{
dest[i] = src[i];
}
return (dest);
}
