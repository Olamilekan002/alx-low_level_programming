#include "lists.h"

/**
 * listint_len - count the elements in a linked list
 * @h: a pointer to the first node
 *
 * Return: the number of list elements
 */
size_t listint_len(const listint_t *h)
{
	/*returns 0 if h is null */
	return (h ? listint_len(h->next) + 1 : 0);

}
