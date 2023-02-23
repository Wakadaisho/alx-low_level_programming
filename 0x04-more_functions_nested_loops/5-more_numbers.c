#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 9, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	int count = 0;

	while (count++ < 10)
	{
		for (i = '0'; i <= '1'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (i == '1' && j >= '5')
					break;

				if (i >= '1')
					_putchar(i);
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
