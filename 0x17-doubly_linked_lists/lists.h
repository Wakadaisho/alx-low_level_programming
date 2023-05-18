#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - returns number of elements in a list
 * @h: doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: doubly linked list to add to
 * @n: data to add to node
 * Return: the new node address, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: doubly linked list to add to
 * @n: data to add to node
 * Return: the new node address, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - free a doubly linked list
 * @head: doubly linked list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - returns a node at a certain index
 * @head: doubly linked list
 * @index: index to get
 * Return: the node address, NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - returns the sum of all the data in a doubly-linked list
 * @head: doubly linked list
 * Return: the sum of the nodes
 */
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: doubly linked list
 * @idx: index to insert node at
 * @n: data to insert
 * Return: new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * delete_dnodeint_at_index - delete a node at an index
 * @head: doubly linked list
 * @index: index to insert node at
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif /* !_LISTS_H_ */
