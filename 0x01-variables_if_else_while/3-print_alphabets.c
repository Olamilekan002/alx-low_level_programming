#include <stdio.h>

/**
* main - Start of function
* prints all alphabet in lower case and then upper case
* Return: returns 0 when successful
*/

int main(void)
{

char lower_c;
char upper_c;

lower_c = 'a';
upper_c = 'A';

while (lower_c <= 'z')
{
putchar(lower_c);
lower_c++;
}

while (upper_c <= 'Z')
{
putchar(upper_c);
upper_c++;
}

putchar('\n');
return (0);
}
