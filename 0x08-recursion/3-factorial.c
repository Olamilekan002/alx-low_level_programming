#include "main.h"

/**
* factorial - gets the factorial of a num
* @n: input number
* Return: int
*/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n >= 1)
{
return (n * factorial(n-1));
}

return (1);
}
