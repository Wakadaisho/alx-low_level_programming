#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - prints a specified text (including newline)
 *		to stderr
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, text, sizeof(text) / sizeof(char));

	return (1);
}
