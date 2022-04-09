#include <stdio.h>

/**
* main - Start of function
* prints all possible combo of numbers seperated with comma
* Return: returns 1 when successful
*/

int main(void)
{

int c;

for (c = 48; c <= 57; c++)
{
putchar(c);

if (c != 57)
{
putchar(44);
putchar(' ');
}

}
putchar('\n');
return (0);
}
