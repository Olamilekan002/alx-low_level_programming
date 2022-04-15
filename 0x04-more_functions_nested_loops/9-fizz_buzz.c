#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
=======
* main - prints 1 to 100, followed by a new line with FIZZ, BUZZ AND FIZZBUZZ
*
* Return: return 0
*/
>>>>>>> a0a3c123d64a81c2fb6ac87cce6ab068858d78ff
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

<<<<<<< HEAD
	return (0);
=======
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}  
}
printf("\n");
return (0);
>>>>>>> a0a3c123d64a81c2fb6ac87cce6ab068858d78ff
}
