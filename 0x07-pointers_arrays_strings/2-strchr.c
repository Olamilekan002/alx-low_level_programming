#include "main.h"
/**
*_strchr - Finds a char in a string
*@s: the memory
*@d: constant byte
*Return: points to the c
*/

char *_strchr(char *s, char c)
{
int i;

i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
