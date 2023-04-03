#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at an index
 *
 * @head: beginning of list
 * @index: index of node to return
 *
 * Return:	listint_t address
 *		NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p;

	if (head == NULL)
		return (NULL);

	p = head;

	while (i < index)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
		i++;
	}

	return (p);
}
