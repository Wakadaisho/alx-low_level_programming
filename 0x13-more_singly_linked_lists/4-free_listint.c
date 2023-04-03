#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 *
 * @head: beginning of list;
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (p)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
