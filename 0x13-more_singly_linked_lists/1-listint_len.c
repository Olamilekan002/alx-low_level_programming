#include "lists.h"

/**
 * list_len - print the number of elements
 * @h: the list to print no of elements
 *
 * Return: size of the list
 */

size_t list_len(const list_t *h)
{
	if (h)
	{
		return (list_len(h->next) + 1);
	}
	return (0);
}
