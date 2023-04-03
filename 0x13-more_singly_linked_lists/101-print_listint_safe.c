#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - prints out the elements of a listint_t list
 *
 * @head: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	list_t *hash = NULL;
	const listint_t *p = head;

	while (p)
	{
		if (find_in_list(hash, (unsigned long int)p) != -1)			/*loop detected*/
		{
			printf("-> [%p] %d\n", (void *)p, p->n);
			break;
		}

		printf("[%p] %d\n", (void *)p, p->n);
		add_node(&hash, (unsigned long int)p);
		len++;
		p = p->next;
	}

	free_list(hash);

	return (len);
}

/**
 * add_node - add a new node to the beginning of a list_t list
 *
 * @head: beginning of list
 * @n: item to be added
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node(list_t **head, unsigned long int n)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * find_in_list - return the index of an item in a list_t
 *
 * @head: beginning of list
 * @n: item to find
 *
 * Return:	index if found
 *		-1 if not found
 */
int find_in_list(list_t *head, unsigned long int n)
{
	list_t *p = head;
	int i = 0;

	while (p)
	{
		if (p->n  == n)
			return (i);
		i++;
		p = p->next;
	}

	return (-1);
}

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
		free(head);
		head = p;
	}
}
