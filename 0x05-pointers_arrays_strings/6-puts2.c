#include "main.h"

/**
* puts2 - prints every other character in a string
*	followed by a newline
* @str: string to print
*
* Return: void
*/
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
