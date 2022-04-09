#include <stdio.h>

/**
* main - Start of function
* prints numbers together without using char
* Return: returns 1 when successful
*/

int main(void)
{

int count = 0;
while (count < 10)
{
putchar(48 + count);
count++;
}
putchar('\n');
return (0);
}
