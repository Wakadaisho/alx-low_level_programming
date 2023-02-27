#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert to integer
 *
 * Return: int
 */
int _atoi(char *s)
{
	int result = 0;
	int parity = 0;
	int foundDigit = 0;

	while (*s)
	{
		if (*s == '+')
		{
			parity++;
		}
		else if (*s == '-')
		{
			parity--;
		}
		else
		{
			if (*s >= '0' && *s <= '9')
			{
				foundDigit = 1;
				result = result * 10 + (*s - '0');
			}
			else
			{
				if (foundDigit)
				{
					break;
				}
			}
		}
		s++;
	}

	return (parity < 0 ? -1 * result : result);
}
