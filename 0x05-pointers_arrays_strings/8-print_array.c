#include "main.h"

/**
* print_array - prints a number given of elements
*
*@a: the array
*@n: number of elements
*/

void print_array(int *a, int n)
{
int length, i;

for (length = 0; a[length] != '\0'; length++)
{
}

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
