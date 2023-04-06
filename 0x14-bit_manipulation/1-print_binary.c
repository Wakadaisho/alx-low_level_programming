#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: number to print the binary digits of
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	while ((i << 1) <= n)
		i <<= 1;

	for (; i; i >>= 1)
		_putchar('0' + (!!(n & i)));
}
