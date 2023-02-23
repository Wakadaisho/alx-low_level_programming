#include "main.h"

/**
 * print_square - print out a square of length n with '#'
 * @n: dimension of the square
 *
 * Return: void
 */
void print_square(int n)
{
	int i = 0, j;

	if (n <= i)
	{
		_putchar('\n');
	}
	while (i++ < n)
	{
		j = 0;
		while (j++ < n)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
