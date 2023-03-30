#include "lists.h"

/**
 * list_len - get the number elements of a list_t list
 *
 * @h - list to be count elements
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
