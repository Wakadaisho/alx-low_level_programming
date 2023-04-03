#include "lists.h"

/**
 * listint_len - get the number elements of a listint_t list
 *
 * @h: list to be count elements
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
