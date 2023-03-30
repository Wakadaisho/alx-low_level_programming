#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints out the elements of a list_t list
 *
 * @h: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
