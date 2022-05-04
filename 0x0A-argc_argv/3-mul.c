#include <stdio.h>
#include <stdlib.h>

/**
* main - start
*
* @argc: Counts the number of parameters that go into main
* @argv: Pointer of array of pointers containing strings entering main
* Return: 1 when successful
*/

int main(int argc, char **argv)
{
int mul;

if (argc == 3)
{
mul = argv[1] * argv[2];
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (1);
}
