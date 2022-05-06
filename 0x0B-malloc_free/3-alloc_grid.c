#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a matrix.
 *@width: the column.
 *@height: the row
 *Return: pointer to the concatenated string if success.
*/

int **alloc_grid(int width, int height)
{
int *mat;
int k;

if (width < 1 || height < 1)
{
return (NULL);
}

mat = malloc(sizeof(*mat) * (width * height));
if (mat == NULL)
{
return (NULL);
}

for (k = 0; k < (width * height); k++)
{
mat[k] = 0;
}

return (mat);
}
