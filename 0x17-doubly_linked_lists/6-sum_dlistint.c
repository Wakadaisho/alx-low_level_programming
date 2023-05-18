#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a doubly-linked list
 * @head: doubly linked list
 * Return: the sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum;

	for (sum = 0, p = head; p; p = p->next)
		sum += p->n;

	return (sum);
}

