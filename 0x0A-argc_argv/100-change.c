#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _string_all_digits - checks whether a string is made of digits
 *
 * @s: string to check
 * @i: index being checked
 *
 * Return:	non-zero if all characters are digits
 *		0 if any character is not a digit
 */
int _string_all_digits(char *s, int i)
{
	if (*s == '\0')
		return (1);

	/* account for negative numbers */
	if (i == 0 && *s == '-')
		return (_string_all_digits(++s, ++i));

	if (!isdigit(*s))
		return (0);

	return (_string_all_digits(++s, ++i));
}

/**
 * main - print the sum of integers passed to the program
 *
 * @argc : number of arguments passed to the executable
 * @argv : string array of arguments passed
 *
 * Return:	0 (Success)
 *		1 - Error (non-number value passed)
 */
int main(int argc, char *argv[])
{
	int cents, i = 0;
	int denoms[] = {25, 10, 5, 2, 1};
	int coins = 0;

	if (argc != 2 || !_string_all_digits(argv[1], 0))
	{
		printf("ERROR\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins += cents >= denoms[i] ? cents / denoms[i] : 0;
		cents %= denoms[i++];
	}

	printf("%i\n", coins);

	return (0);
}
