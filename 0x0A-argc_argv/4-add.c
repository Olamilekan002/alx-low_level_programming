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
int mul, x;

x = 0;
sum = 0;
if (argc < 2)
{
printf("%d\n", sum);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
x = 1;
printf("%s\n", "Error");
}

return (x);
}
