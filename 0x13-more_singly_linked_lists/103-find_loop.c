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
		s = s->next;
		f = f->next;
		if (f->next == NULL)
			return (NULL);
		f = f->next;
		if (s == f)
			break;
	}
	if (f == NULL)
		return (NULL);

	s = head;
	while (s != f)
	{
		s = s->next;
		f = f->next;
	}

	return (s);
}
