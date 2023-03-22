#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__
#include <stddef.h>

/**
 * print_name - prints out a name, using a function pointer
 *
 * @name: string to print
 * @f: function pointer that specifies how the printing is done
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - execute a function on each element in an array
 *
 * @array: the array to process
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - find a number in an array using a comparison function pointer
 *
 * @array: the array to process
 * @size: size of the array
 * @cmp: function used to compare values
 *
 * Return: int, index of found element
 *		-1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int));
#endif /* __FUNCTION_POINTERS_H__ */
