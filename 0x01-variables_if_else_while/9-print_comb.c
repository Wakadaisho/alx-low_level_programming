
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints thei lowercase alphabet in reverse,
 *		followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
