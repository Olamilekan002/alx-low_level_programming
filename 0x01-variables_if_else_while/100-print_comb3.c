#include <stdio.h>

/**
* main - Start of function
* prints all possible combo of numbers seperated *withcomma
* Return: returns 1 when successful
*/

int main(void)
{

int c;
int d;
for (c = 48; c <= 57; c++)
{

for (d = c + 1; d <= 57; d++)
{
putchar(c);
putchar(d);
if (c < 56)
{
putchar(44);
putchar(' ');
}

}
}
putchar('\n');
return (0);


}
