#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - prints out the elements of a list_t list
 *
 * @h - list to be printed out
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h);

/**
 * list_len - get the number elements of a list_t list
 *
 * @h - list to be count elements
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - add a new node to the beginning of a list_t list
 *
 * @head - beginning of list;
 * @str - list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node(list_t **head, const char *str);

/**
 * free_list - free a list_t list
 *
 * @head - beginning of list;
 *
 * Return: void
 */
void free_list(list_t *head);

/**
 * add_node_end - add a new node to the end of a list_t list
 *
 * @head - beginning of list;
 * @str - list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str);

#endif /* _LISTS_H_ */
