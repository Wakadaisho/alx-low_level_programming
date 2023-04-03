#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at a certain index
 *
 * @head: beginning of list
 * @index: index to insert data
 *
 * Return:	1 if succeeded
 *		-1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p, *prev;

	if (head == NULL)
		return (-1);

	prev = p = *head;

	while (p && i <= index)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = p->next;
			}
			else
			{
				prev->next = p->next;
			}
			free(p);
			return (1);
		}
		i++;
		prev = p;
		p = p->next;
	}
	return (-1);
}
