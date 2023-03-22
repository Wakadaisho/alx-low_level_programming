#ifndef __FUNCTION_POINTERS_H_
#define __FUNCTION_POINTERS_H__
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));
#endif /* __FUNCTION_POINTERS_H_ */
