#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to get the bit value from
 * @index: the index, starting from 0, to get the bit value of
 *
 * Return:	value of the bit at index
 *		Fail: -1 if index does not exist
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (n == 0 && index == 0)
		return (0);

	while (index--)
		i <<= 1;

	if (i > n)
		return (-1);

	return (!!(n & i));
}
