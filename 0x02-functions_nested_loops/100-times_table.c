#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the last number,
 *	not less than 10,
 *	not more than 15
 * Return: void
 */
void print_times_table(int n)
{
	int r = 0, c = 1, result;

	if (n < 0 || n > 15)
		return;
	while (r <= n)
	{
		_putchar('0');
		while (c <= n)
		{
			result = r * c;
			_putchar(',');
			_putchar(' ');
			if (result >= 100)
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			c++;
		}
		c = 1;
		_putchar('\n');
		r++;
	}
}

