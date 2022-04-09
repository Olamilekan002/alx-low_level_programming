#include <stdio.h>

/**
* main - Starting point
* prints all digits
* Return: return 0 if successful
*/

int main(void)
{

char num;

for (num = 0; num < '10'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
