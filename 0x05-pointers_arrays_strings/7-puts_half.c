#include "main.h"

/**
* puts_half - prints half a string
* @s: string to print
*
* Return: void
*/
void puts_half(char *s)
{
	int len = 0;
	char *start = s;

	while (*start++)
	{
		len++;
	}

	start = s + len / 2 + len % 2;

	while (*start)
	{
		_putchar(*start++);
	}

	_putchar('\n');
}
