#include "main.h"

/**
* print_rev - prints a string in reverse
*		followed by a newline
* @s: string to print in reverse
*
* Return: void
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	while (len--)
	{
		_putchar(*--s);
	}

	_putchar(*--s);
	_putchar('\n');
}
