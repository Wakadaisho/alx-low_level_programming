#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 *
 * @head: beginning of list;
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (p)
	{
		p = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = p;
	}
}
