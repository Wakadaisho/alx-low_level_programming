#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: doubly linked list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *p = head;

	while (p)
	{
		tmp = p;
		p = p->next;
		free(tmp);
	}
}
