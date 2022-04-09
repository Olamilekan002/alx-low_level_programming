#include <stdio.h>

/**
* main - Start of function
* prints combo of 3 numbers 1-9
* Return: returns 0 when successful
*/

int main(void)
{

int x;
int y;
int z;

for (x = 48; x <= 57; x++)
{

for (y = x + 1; y <= 57; y++)
{

for (z = y + 1; z <= 57; z++)
{
putchar(x);
putchar(y);
putchar(z);

if (x < 55)
{
putchar(44);
putchar(' ');
}

}
}
}
putchar('\n');
return (0);


}
