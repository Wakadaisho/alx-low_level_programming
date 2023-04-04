#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node with data at a certain index
 *
 * @head: beginning of list
 * @idx: index to insert data
 * @n: integer to insert
 *
 * Return:	listint_t address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p, *new, *prev = NULL;

	if (head == NULL)
		return (NULL);

	p = *head;
	prev = *head;

	while (p && i <= idx)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->next = p->next;
			new->n = n;
			prev->next = new;
			return (new);
		}
		i++;
		prev = p;
		p = p->next;
	}
	return (NULL);
}
