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
int i, j, k;
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

str = malloc(sizeof(char) * (i + j));
if (str == NULL)
{
return (NULL);
}

for (k = 0; k < i; k++)
{
str[k] = s1[k];
}

for (; k < i + j; k++)
{
str[k] = s2[k - i];
}
str[k] = '\0';
return (str);
}
