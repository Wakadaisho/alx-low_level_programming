#include "main.h"

/**
 * main - print the text _putchar to stdout
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i, text_length = sizeof(text) / sizeof(char);

	for (i = 0; i < text_length; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
