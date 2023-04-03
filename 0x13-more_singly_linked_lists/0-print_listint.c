#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints out the elements of a listint_t list
 *
 * @h: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
