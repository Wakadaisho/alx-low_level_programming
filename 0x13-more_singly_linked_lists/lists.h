#ifndef _LISTINT_H_
#define _LISTINT_H_
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_list - prints out the elements of a listint_t list
 *
 * @h: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - get the number elements of a listint_t list
 *
 * @h: list to be count elements
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h);

/**
 * add_nodeint - add a new node to the beginning of a listint_t list
 *
 * @head: beginning of list;
 * @n: list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - add a new node to the end of a listint_t list
 *
 * @head: beginning of list;
 * @n: list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - free a listint_t list
 *
 * @head: beginning of list;
 *
 * Return: void
 */
void free_listint(listint_t *head);

/**
 * free_listint2 - frees a listint_t list, setting head to NULL
 *
 * @head: beginning of list;
 *
 * Return: void
 */
void free_listint2(listint_t **head);

/**
 * pop_listint - deletes the head of a node and returns the data
 *
 * @head: beginning of list;
 *
 * Return: int
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - returns the node at an index
 *
 * @head: beginning of list
 * @index: index of node to return
 *
 * Return:	listint_t address
 *		NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - returns the node at an index
 *
 * @head: beginning of list
 *
 * Return:	listint_t address
 */
int sum_listint(listint_t *head);

/**
 * delete_nodeint_at_index - delete a node at a certain index
 *
 * @head: beginning of list
 * @index: index to insert data
 *
 * Return:	1 if succeeded
 *		-1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/**
 * insert_nodeint_at_index - inserts a node with data at a certain index
 *
 * @head: beginning of list
 * @idx: index to insert data
 * @n: integer to insert
 *
 * Return:	listint_t address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/**
 * reverse_listint - reverses a list
 *
 * @head: beginning of list
 *
 * Return:	listint_t address
 */
listint_t *reverse_listint(listint_t **head);

/**
 * print_listint_safe - prints out the elements of a listint_t list
 *
 * @head: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head);

/**
 * free_listint_safe - frees a list with possible loops
 *
 * @h: list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h);

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: list to be checked
 *
 * Return:	address of node where loop starts
 *		NULL if no loop
 *
 */
listint_t *find_listint_loop(listint_t *head);

/**
 * struct list_s - singly linked list
 * @n: data - unsigned long int
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	unsigned long int n;
	struct list_s *next;
} list_t;

/**
 * add_node - add a new node to the beginning of a list_t list
 *
 * @head: beginning of list
 * @n: item to be added
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node(list_t **head, unsigned long int n);

/**
 * find_in_list - return the index of an item in a list_t
 *
 * @head: beginning of list
 * @n: item to find
 *
 * Return:	index if found
 *		-1 if not found
 */
int find_in_list(list_t *head, unsigned long int n);

/**
 * free_list - free a list_t list
 *
 * @head: beginning of list
 *
 * Return: void
 */
void free_list(list_t *head);

#endif /* _LISTINT_H_ */
