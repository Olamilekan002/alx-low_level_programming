#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Start of function
*
* Return: returns 1 when successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
printf("is positive\n");
}
else if(n==0){
printf("is zero");
}
else{
printf("is negative");
}
	return (0);
}
