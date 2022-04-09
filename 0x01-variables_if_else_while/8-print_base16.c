#include <stdio.h>

/**
* main - Start of function
* prints number of base 16
* Return: returns 1 when successful
*/

int main(void)
{

char num = '0';
char c = 'a';
while (num <= '9')
{
putchar(num);
num++;
}

while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
