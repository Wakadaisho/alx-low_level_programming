#include "main.h"

/**
* print_number - print an integer
* @n: number to print
*
* Return: void;
*/
void print_number(int n)
{
	int parity = n < 0 ? -1 : 1;
	int n_copy = n / 10 * parity;
	int digit;
	int place = 1;

	n *= parity;

	if (parity == -1)
		_putchar('-');

	while (n_copy)
	{
		n_copy /= 10;
		place *= 10;
	}

	while (place)
	{
		digit = n / place;
		n %= place;
		place /= 10;
		_putchar('0' + digit);
	}
}
