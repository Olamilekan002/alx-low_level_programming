#include "lists.h"

/**
 * print_list - print list items
 * @h: the list to print
 *
 * Description: Print each list item, prefixed by it's length, formatted using
 * "[%d] %s\n".
 *
 * Return: size of the list if successful
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	return (0);
}
