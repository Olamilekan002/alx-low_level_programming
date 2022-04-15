#include "main.h"

/**
* _isdigit - check the code
* @digit: the digit to check for
* Return: 1 if digit else 0.
*/

int _isdigit(int digit)
{
if (digit >= '0' && digit <= '9')
{
return (1);
}

else
{
return(0);
}
}
