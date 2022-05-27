#include "lists.h"

/**
 * print_listint - print the elements in a linked list
 * @h: a pointer to the first node
 *
 * Return: the number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
