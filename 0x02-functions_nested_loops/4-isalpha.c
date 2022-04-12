#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _isalpha(int c)

{

if (c >= 'a' && c =< 'z')
{
return (1);
}

else if (c >= 'A' && c =< 'Z')
{
return (1);
}

else
{
return (0);
}

}
