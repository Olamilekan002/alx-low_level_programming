#include <stdio.h>

/**
* main - Start of function
* prints lower case alphabets in reverse other
* Return: returns 1 when successful
*/

int main(void)
{

char c = 'z' ;
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
