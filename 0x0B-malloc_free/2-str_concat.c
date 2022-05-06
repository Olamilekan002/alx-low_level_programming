#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings.
 *@s1: string.
 *@s2: 2nd string
 *Return: pointer to the concatenated string if success.
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
  if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	;
  for (j = 0; s2[j]; j++)
	;
	j++;
    
	str = malloc(sizeof(char) * (i+j));
  
	for (i = 0; str[i] != '\0'; i++)
		str[i] = s1[i];
  for (j = 0; str[j] != '\0'; j++)
		str[i + j] = s2[j];
	str[j] = '\0';
	return (str);
}
