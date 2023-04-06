#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get one number from another
 *
 * @n: first operand
 * @m: second operand
 *
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, xor;

	for (xor = n ^ m, flips = 0; xor; xor >>= 1)
		flips += xor & 1;

	return (flips);
}
