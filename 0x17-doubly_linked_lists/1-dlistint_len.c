#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements in a list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; h = h->next)
		len++;

	return (len);
}
