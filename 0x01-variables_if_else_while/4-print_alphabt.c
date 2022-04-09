#include <stdio.h>

/**
* main - Start of function
* prints all alphabet in lower case except q and e
* Return: returns 0 when successful
*/

int main(void)
{

char letter = 'a';

while (letter <= 'z')
{
if (letter != q && letter != e)
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
