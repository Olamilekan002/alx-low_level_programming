#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* *malloc_checked - creates a dynamic space
* @b: the size of the space
* Return: returns a pointer
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
