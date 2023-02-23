
#include "main.h"

/**
 * print_number - print an integer n using only _putchar
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}


	if (n / 10)		/* repeat till the first digit */
		print_number(n / 10);

	/* print the last digits up the recursion chain */
	_putchar('0' + n % 10);
}
