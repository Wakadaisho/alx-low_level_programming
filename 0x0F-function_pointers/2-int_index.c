#include "function_pointers.h"

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
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, elem;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		elem = array[i];
		if (cmp(elem))
		{
			return (i);
		}
	}

	return (-1);
}

