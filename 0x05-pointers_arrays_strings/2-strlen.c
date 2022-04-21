#include "main.h"

/**
* _strlen - returns the length of a string
*
* @s: the string to be counted
* Return: returns length of string
*/

int _strlen(char *s)
{
int len;

len = 0;
while(*s != '\0')
{
len++;
s++;
}
return len;
}
