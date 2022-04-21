#include "main.h"

/**
* swap_int - a pointer function
*
* @a: first pointer var
* @b: second pointer var
*/

void swap_int(int *a, int *b)
{
int *p;

p = *a;
*a = *b;
*b = p;
}
