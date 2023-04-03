#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the node at an index
 *
 * @head: beginning of list
 *
 * Return:	listint_t address
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
