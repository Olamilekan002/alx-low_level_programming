#include <stdio.h>
#include <stdlib.h>

/**
* main - start
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer of array of pointers containing strings entering main
* Return: 1 when failed
*/

int main(int argc, char **argv)
{
int sum, x;

x = 0;
sum = 0;
if (argc < 2)
{
printf("%d\n", sum);
}
else
{
sum = atoi(argv[1]) + atoi(argv[2]);
x = 1;
printf("%d\n", sum);
}

return (x);
}
