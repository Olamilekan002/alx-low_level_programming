#include "main.h"

/**
 * sqrt - Makes possible to evaluate from 1 to n
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: int.
 */

int sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (sqrt(x, x + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: int.
 */

int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}
