#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int r = 0, c = 0, result;

	while (r <= 9)
	{
		while (c <= 9)
		{
			result = r * c;
			if (result >= 10)
			{
				_putchar('0' + result / 10);
			}
			else
			{
				if (c != 0)
				{
					_putchar(' ');
				}
			}

			_putchar('0' + result % 10);

			if (c == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		c = 0;
		r++;
	}
}

