#include "lists.h"

/**
 * _strlen - calculate the length of a string
 * @str: the string to calculate the length of
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	const char *pos = str;

	if (str)
	{
		while (*pos)
			++pos;
	}
	return (pos - str);
}

/**
 * add_node - insert a string at the beginning of the list
 * @head: a pointer to the address of the first list node
 * @str: the string to add to the list
 *
 * Return: If memory allocation fails, return NULL. Otherwise, return the
 * address of the new no
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = (_strlen(new->str));
	new->next = *head;

	*head = new;

	return (new);
}
