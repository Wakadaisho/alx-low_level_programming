#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

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
	int sum = 0;
	int args = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (++args < argc)
	{
		if (!_string_all_digits(argv[args], 0))
		{
			printf("ERROR\n");
			return (1);
		}

		sum += atoi(argv[args]);
	}

	printf("%i\n", sum);

	return (0);
}
