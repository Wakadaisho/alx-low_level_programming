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
		if (*++str == '\0')
			break;
		str += 1;
	}

	_putchar('\n');
}
