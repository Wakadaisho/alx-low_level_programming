#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint_safe - frees a list with possible loops
 *
 * @h: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	list_t *hash = NULL;
	const listint_t *p, *curr;

	if (h == NULL)
		return (len);

	p = *h;

	while (p)
	{
		curr = p;
		if (find_in_list(hash, (unsigned long int)p) != -1)			/*loop detected*/
		{
			break;
		}
		add_node(&hash, (unsigned long int)p);
		len++;
		p = p->next;
		free((void *)curr);
	}

	free_list(hash);

	*h = NULL;

	return (len);
}
