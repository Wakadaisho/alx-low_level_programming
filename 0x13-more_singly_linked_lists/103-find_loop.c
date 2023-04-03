#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: list to be checked
 *
 * Return:	address of node where loop starts
 *		NULL if no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	s = f = head;

	while (s && f)
	{
		if (s == f)
			return (f);

		s = s->next;
		if (s->next == NULL)
			return (NULL);
		f = s->next;
	}


	return (NULL);
}
