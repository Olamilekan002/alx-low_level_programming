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
	int *ptr;
	ptr = 0;
	
  if (nmemb == 0 || size == 0)
  {
  return (NULL);
  }
  
  ptr = malloc(sizeof(size) * nmemb);
  
  if (ptr == NULL)
  {
  return (NULL);
  }
	
	return (ptr);
}
