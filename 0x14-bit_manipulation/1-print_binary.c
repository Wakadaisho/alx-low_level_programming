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
	if (n <= 1)
	{
		_putchar('0' + n);
		return;
	}

	print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
