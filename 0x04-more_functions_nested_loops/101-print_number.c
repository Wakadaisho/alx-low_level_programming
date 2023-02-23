
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
		_putchar(45);
	}

	if ((n / 10) != 0)
	{
		print_number(n / 10);
	}

	_putchar(48 + (n % 10));
}
