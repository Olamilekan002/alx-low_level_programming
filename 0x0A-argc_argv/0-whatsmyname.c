#include <stdio.h>
#include <stdlib.h>

/**
 * main - start
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: 0 when successful 
 */

int main(int argc, char **argv)
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
