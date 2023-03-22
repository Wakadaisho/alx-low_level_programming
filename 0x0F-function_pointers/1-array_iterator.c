#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element in an array
 *
 * @array: the array to process
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
