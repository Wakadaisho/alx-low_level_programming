#include "main.h"

/**
 * print_alphabet_x10 - call print_alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		c = 'a';
		_putchar('\n');
	}
}

