#include "lists.h"

/**
 * add_nodeint - add an element at the beginning of a linked list
 * @head: a pointer to a pointer to the first node
 * @n: the element to add
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 * Otherwise, return the address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
