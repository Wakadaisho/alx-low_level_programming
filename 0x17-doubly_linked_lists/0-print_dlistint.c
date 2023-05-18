#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; h = h->next, len++)
		printf("%i\n", h->n);

	return (len);
}
