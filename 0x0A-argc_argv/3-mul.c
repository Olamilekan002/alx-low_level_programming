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
mul = 0;
if (argc == 3)
{
mul = ato(iargv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
x = 1;
printf("%s\n", "Error");
}

return (x);
}
