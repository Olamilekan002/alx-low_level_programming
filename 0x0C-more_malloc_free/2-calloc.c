#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocate memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to new memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;
	
	ptr = 0;
	
  if (nmemb == 0 || size == 0)
  {
  return (NULL);
  }
  
  ptr = malloc(size * nmemb);
  
  if (ptr == NULL)
  {
  return (NULL);
  }

i = 0;
while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
return (ptr);
}
