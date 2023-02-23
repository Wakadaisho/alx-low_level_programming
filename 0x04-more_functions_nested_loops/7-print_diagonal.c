#include "main.h"

/**
 * print_diagonal - print out a diagonal of length n with '\'
 * @n: length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= i)
	{
		_putchar('\n');
	}
	while (i++ < n)
	{
		int j = 0;

		while (++j < i)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
