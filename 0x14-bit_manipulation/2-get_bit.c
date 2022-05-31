#include "main.h"

/**
 * get_bit - return the value of bit at an index
 * @n: the integer to operate on
 * @index: the index of the desired bit
 *
 * Return: If the index is invalid, return -1. Otherwise, return the value
 * of the bit at the specified index, or if
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (1 & (n >> index));
}
