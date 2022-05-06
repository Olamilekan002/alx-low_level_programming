#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates araays of char dynamically
 * @size: size of the array to be created
 * @c: the placeholder character
 *
 * Return: pointer to the char.
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}

return (ptr);
}
