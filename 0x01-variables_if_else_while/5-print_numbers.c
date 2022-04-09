#include <stdio.h>

/**
* main - Starting point
* prints all digits
* Return: return 0 if successful
*/

int main(void)
{

char num;

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
