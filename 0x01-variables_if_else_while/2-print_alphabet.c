#include <stdio.h>

/**
* main - Start of function
* prints all alphabet in lower case
* Return: returns 1 when successful
*/

int main(void)
{

char letter;

letter = "a";

while (letter <= "z")
{
putchar(letter);
letter++;
}
putchar("\n");
return (0);
}
