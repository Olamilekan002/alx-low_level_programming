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
int sum;

sum = 0;
if (argc < 2)
{
printf("%d\n", sum);
}
else
{
while (argc > 1)
{
    if (isdigit(argv[argc]) > 0)
    {
    sum += atoi(argv[argc]);
    argc--;
    }
    else
    {
        printf("%s\n", "Error");
        return (1);
    }
    }
}
return (0);
}
