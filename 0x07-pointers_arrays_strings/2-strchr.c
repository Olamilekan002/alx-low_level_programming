#include "main.h"
/**
*_strchr - Finds a char in a string
*@s: the memory
*@c: constant byte
*Return: points to the c
*/

char *_strchr(char *s, char c)
{
unsigned int i;

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
break;
}
i++;
}
return (s[i] == c ? (s + i) : '\0');;
}
