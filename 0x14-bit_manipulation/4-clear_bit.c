#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to set the bit of
 * @index: the index, starting from 0, to clear the bit value of
 *
 * Return:	Success: 1
 *		Fail: - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (n == NULL)
		return (-1);

	while (index--)
		i <<= 1;

	if (i & *n)
		*n -= i;

	return (1);
}
